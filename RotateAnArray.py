def rotate_array(arr, k):
    n = len(arr)  # Độ dài của mảng
    k = k % n  # Giảm số vòng xoay nếu k > n
    rotated = [0] * n  # Tạo mảng phụ để lưu kết quả
    for i in range(n):
        # Tính chỉ số mới sau khi xoay
        new_index = (i + k) % n
        rotated[new_index] = arr[i]  # Gán giá trị từ mảng cũ sang mảng mới
    return rotated


arr = list(map(int, input("Nhập các phần tử của mảng (phân cách bằng khoảng trắng): ").split()))
k = int(input("Nhập số lần xoay mảng: "))

# Gọi hàm và in kết quả
result = rotate_array(arr, k)
print("Mảng sau khi xoay:", result)
