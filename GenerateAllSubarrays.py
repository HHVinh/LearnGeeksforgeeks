def printSubArrays(arr):
    n = len(arr)
    
    # Duyệt qua tất cả các chỉ số bắt đầu của subarray
    for i in range(n):
        # Duyệt qua tất cả các chỉ số kết thúc của subarray
        for j in range(i, n):
            # In ra subarray từ i đến j
            print(arr[i:j+1])

# Yêu cầu người dùng nhập mảng
arr_input = input("Nhập các phần tử của mảng cách nhau bởi khoảng trắng: ")

# Chuyển chuỗi nhập vào thành danh sách các số nguyên
arr = list(map(int, arr_input.split()))

# Gọi hàm để in ra tất cả các subarray
print("Các subarray của mảng là:")
printSubArrays(arr)
