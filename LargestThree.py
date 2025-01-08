def largestThree(arr):
    if len(arr) < 1:
        return []
    # Khởi tạo 3 giá trị cực tiểu để tìm ra 3 giá trị lớn nhất
    num1 = num2 = num3 = float('-inf')
    for i in range(len(arr)):

        # Nếu phần tử hiện tại lớn hơn num1 (giá trị lớn nhất hiện tại)
        if arr[i] > num1:
            num3 = num2  # Cập nhật num3 thành num2
            num2 = num1  # Cập nhật num2 thành num1
            num1 = arr[i]  # Cập nhật num1 thành phần tử hiện tại

        # Nếu phần tử hiện tại nằm giữa num1 và num2, nhưng không bằng num1
        elif arr[i] > num2 and arr[i] != num1:
            num3 = num2  # Cập nhật num3 thành num2
            num2 = arr[i]  # Cập nhật num2 thành phần tử hiện tại

        # Nếu phần tử hiện tại nằm giữa num2 và num3, nhưng không bằng num1 và num2
        elif arr[i] > num3 and arr[i] != num1 and arr[i] != num2:
            num3 = arr[i]  # Cập nhật num3 thành phần tử hiện tại
            
    # Kiểm tra và in ra ba giá trị lớn nhất, hai giá trị lớn nhất hoặc một giá trị lớn nhất
    if num3 != float('-inf'):
        print("3 giá trị lớn nhất là: ", num1, num2, num3)
    elif num2 != float('-inf'):
        print("2 giá trị lớn nhất là: ", num1, num2)
    else:
        print("1 giá trị lớn nhất là: ", num1)

# Yêu cầu người dùng nhập số lượng phần tử trong mảng
arr = []
n = int(input("Nhập số lượng phần tử trong mảng: "))

# Nhập các phần tử cho mảng từ người dùng
for i in range(n):
    arr.append(int(input(f"Nhập phần tử thứ {i+1}: ")))

# Gọi hàm largestThree để tìm ba giá trị lớn nhất
largestThree(arr)
