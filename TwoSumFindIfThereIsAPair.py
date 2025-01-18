def twoSum(arr, target):
    # Khởi tạo một set để lưu trữ các phần tử
    s = set()
    # Duyệt qua từng phần tử trong mảng
    for num in arr:
      
        # Tính toán phần tử bổ sung (complement) sao cho tổng bằng target
        complement = target - num

        # Kiểm tra xem complement có tồn tại trong set không
        if complement in s:
            return True

        # Thêm phần tử hiện tại vào set
        s.add(num)

    # Nếu không tìm thấy cặp hợp lệ
    return False

# Nhập mảng và giá trị mục tiêu
arr = list(map(int, input("Nhập mảng các số cách nhau bởi khoảng trắng: ").split()))
target = int(input("Nhập giá trị target: "))

# Gọi hàm twoSum và in kết quả
if twoSum(arr, target):
    print("true")
else:
    print("false")
