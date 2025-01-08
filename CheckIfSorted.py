def arraySortedOrNot(arr, n):
    # Nếu mảng có một hoặc không có phần tử, mảng đã được sắp xếp
    if (n == 0 or n == 1):
        return True

    # Duyệt qua mảng để tìm cặp phần tử không sắp xếp
    for i in range(1, n):
        # Nếu tìm thấy cặp phần tử mà phần tử trước lớn hơn phần tử sau
        if (arr[i-1] > arr[i]):
            return False

    # Nếu không tìm thấy cặp phần tử nào sai
    return True


# Nhập mảng từ người dùng
arr = list(map(int, input("Hãy nhập các phần tử của mảng cách nhau bởi khoảng trắng: ").split()))

# Tính toán số lượng phần tử trong mảng
n = len(arr)

# Kiểm tra mảng có sắp xếp không và in kết quả
if (arraySortedOrNot(arr, n)):
    print("Yes")
else:
    print("No")
