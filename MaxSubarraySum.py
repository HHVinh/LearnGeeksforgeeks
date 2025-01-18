def maxSubarraySum(arr):
    # Gán giá trị khởi tạo cho tổng con lớn nhất
    max_sum = arr[0]
    current_sum = arr[0]

    for i in range(1, len(arr)):
        # Tính tổng con lớn nhất kết thúc tại chỉ số i
        current_sum = max(current_sum + arr[i], arr[i])
        
        # Cập nhật tổng con lớn nhất toàn cục
        max_sum = max(max_sum, current_sum)
    
    return max_sum

# Nhập mảng từ người dùng
arr = list(map(int, input("Nhập dãy số (cách nhau bởi dấu cách): ").split()))
print("Tổng dãy con lớn nhất là:", maxSubarraySum(arr))
