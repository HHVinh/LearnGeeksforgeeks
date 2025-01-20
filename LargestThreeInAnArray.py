def print3largest(arr):
    arr_size = len(arr)  # Kích thước của mảng
    # Kiểm tra nếu mảng có ít nhất ba phần tử
    if arr_size < 3:
        print("Mảng không hợp lệ. Cần ít nhất 3 phần tử.")
        return
    # Khởi tạo ba biến đại diện cho ba số lớn nhất
    third = first = second = float('-inf')  # Giá trị nhỏ nhất có thể
    # Duyệt qua từng phần tử trong mảng
    for i in range(arr_size):
        # Nếu phần tử hiện tại lớn hơn số lớn nhất `first`
        if arr[i] > first:
            third = second  # Cập nhật số lớn thứ ba
            second = first  # Cập nhật số lớn thứ hai
            first = arr[i]  # Gán số lớn nhất mới
        # Nếu phần tử hiện tại lớn hơn `second` nhưng nhỏ hơn `first`
        elif arr[i] > second and arr[i] != first:
            third = second  # Cập nhật số lớn thứ ba
            second = arr[i]  # Gán số lớn thứ hai mới
        # Nếu phần tử lớn hơn `third` nhưng không bằng `first` và `second`
        elif arr[i] > third and arr[i] != second and arr[i] != first:
            third = arr[i]  # Gán số lớn thứ ba mới
    # In ra ba phần tử lớn nhất
    print("Ba phần tử lớn nhất là:", first, second, third)
    
if __name__ == "__main__":
    # Yêu cầu nhập mảng từ người dùng
    arr = list(map(int, input("Nhập các phần tử của mảng, cách nhau bởi khoảng trắng: ").split()))
    print3largest(arr)
