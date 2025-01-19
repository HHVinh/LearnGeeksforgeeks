def binary_search(arr, target):
    low, high = 0, len(arr) - 1  # Đặt biến `low` là vị trí đầu và `high` là vị trí cuối của mảng

    while low <= high:  # Lặp lại khi phạm vi tìm kiếm vẫn còn
        mid = low + (high - low) // 2  # Tính vị trí giữa để so sánh
        if arr[mid] == target:  # Nếu giá trị giữa bằng `target`, trả về chỉ số giữa
            return mid
        elif arr[mid] < target:  # Nếu giá trị giữa nhỏ hơn `target`, tìm trong nửa bên phải
            low = mid + 1
        else:  # Nếu giá trị giữa lớn hơn `target`, tìm trong nửa bên trái
            high = mid - 1

    return -1  # Trả về -1 nếu không tìm thấy

arr = list(map(int, input("Nhập một danh sách các số (cách nhau bởi khoảng trắng): ").split()))

target = int(input("Nhập giá trị cần tìm kiếm: "))  # Nhập giá trị cần tìm kiếm

# Gọi hàm tìm kiếm nhị phân
result = binary_search(arr, target)

# Hiển thị kết quả
if result != -1:
    print(f"Giá trị {target} được tìm thấy tại vị trí {result} (tính từ 0).")
else:
    print(f"Giá trị {target} không tồn tại trong danh sách.")
