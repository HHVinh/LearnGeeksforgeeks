def countOnes(arr, n):
    # Khởi tạo chỉ số thấp (low) và chỉ số cao (high)
    low = 0
    high = n - 1
    # Duyệt mảng sử dụng phương pháp tìm kiếm nhị phân
    while (low <= high):  # Lặp cho đến khi tìm được số 1 cuối cùng
        mid = (low + high) // 2  # Tính chỉ số giữa mảng
        # Nếu phần tử tại vị trí mid là 0, tìm kiếm trong nửa trái của mảng
        if (arr[mid] < 1):
            high = mid - 1
        # Nếu phần tử tại vị trí mid là 1, kiểm tra tiếp
        elif(arr[mid] > 1):
            low = mid + 1
        else:
            # Kiểm tra nếu phần tử tại vị trí mid là 1 cuối cùng trong mảng
            if (mid == n - 1 or arr[mid + 1] != 1):
                return mid + 1  # Trả về số lượng phần tử 1 trong mảng
            else:
                low = mid + 1  # Tiếp tục tìm kiếm trong nửa phải của mảng
    # Nếu không tìm thấy phần tử 1 nào
    return 0

if __name__ == '__main__':
    # Nhập mảng nhị phân từ người dùng trong 1 hàng
    arr = list(map(int, input("Nhập các phần tử của mảng nhị phân (0 hoặc 1) cách nhau bằng dấu cách: ").split()))
    
    # Tính số lượng phần tử 1 trong mảng và hiển thị kết quả
    n = len(arr)  # Tính độ dài mảng
    print("Số lượng 1 trong mảng là:", countOnes(arr, n))
