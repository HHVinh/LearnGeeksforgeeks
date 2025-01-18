def equilibriumPoint(arr):
    # Khởi tạo tổng tiền tố (prefSum) và tổng toàn bộ mảng
    leftSum = 0
    rightSum = sum(arr)  # Tổng toàn bộ mảng

    # Lặp qua mảng và kiểm tra chỉ số cân bằng
    for pivot in range(len(arr)):
        # Trừ đi phần tử hiện tại khỏi rightSum để có tổng bên phải
        rightSum -= arr[pivot]

        # Nếu tổng tiền tố và tổng hậu tố (rightSum) bằng nhau, ta tìm được chỉ số cân bằng
        if leftSum == rightSum:
            return pivot
        
        # Cập nhật tổng tiền tố (leftSum)
        leftSum += arr[pivot]

    # Nếu không tìm thấy chỉ số cân bằng, trả về -1
    return -1

# Nhập mảng từ người dùng
arr = list(map(int, input("Nhập mảng các số cách nhau bởi khoảng trắng: ").split()))

# Gọi hàm tìm chỉ số cân bằng và in kết quả
result = equilibriumPoint(arr)
print(result)
