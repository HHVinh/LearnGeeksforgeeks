# Hàm tìm tổng con lớn nhất trong mảng đã được lặp lại k lần
def max_subarray_sum_repeated(arr, k):
    # Lấy độ dài của mảng
    n = len(arr)

    # Khởi tạo biến để lưu trữ tổng con lớn nhất
    max_so_far = float('-inf')  # Ban đầu đặt giá trị nhỏ nhất có thể
    max_ending_here = 0  # Biến lưu trữ tổng con kết thúc tại vị trí i

    # Lặp qua tất cả các phần tử trong k lần lặp mảng
    for i in range(n * k):
        # Dùng toán tử mô-đun để lấy phần tử của mảng (lặp qua mảng nhiều lần)
        max_ending_here += arr[i % n]

        # Cập nhật tổng con lớn nhất
        max_so_far = max(max_so_far, max_ending_here)

        # Nếu tổng con hiện tại nhỏ hơn 0, bắt đầu lại từ 0
        if max_ending_here < 0:
            max_ending_here = 0
    return max_so_far

# Nhập mảng và số lần lặp từ người dùng
arr = list(map(int, input("Nhập mảng số nguyên, cách nhau bởi dấu cách: ").split()))
k = int(input("Nhập số lần lặp mảng k: "))

# Gọi hàm và in kết quả
print("Tổng con lớn nhất là:", max_subarray_sum_repeated(arr, k))
