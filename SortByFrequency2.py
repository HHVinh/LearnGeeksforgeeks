def sapXepTheoTanSuat(arr):
    """
    Sắp xếp các phần tử trong mảng theo tần suất giảm dần.
    Nếu hai phần tử có cùng tần suất, phần tử xuất hiện trước trong mảng ban đầu sẽ được ưu tiên.
    """
    # Bước 1: Tạo một từ điển để đếm tần suất của từng phần tử trong mảng
    tanSuat = {}
    for num in arr:
        if num in tanSuat:  # Nếu phần tử đã xuất hiện trước đó
            tanSuat[num] += 1  # Tăng tần suất lên 1
        else:  # Nếu phần tử lần đầu xuất hiện
            tanSuat[num] = 1  # Gán tần suất bằng 1
    # Bước 2: Chuyển từ điển thành danh sách các phần tử có cả giá trị và tần suất
    danhSach = [{'val': k, 'count': v} for k, v in tanSuat.items()]
    # Kết quả: danhSach là danh sách các từ điển với cấu trúc {'val': giá trị, 'count': tần suất}
    # Bước 3: Hàm sắp xếp QuickSort để sắp xếp danh sách dựa trên tần suất
    
    def quickSort(arr, low, high):
        if low < high:
            pi = phanChia(arr, low, high)  # Chọn vị trí "pivot" sau khi phân chia
            quickSort(arr, low, pi - 1)  # Sắp xếp phần bên trái "pivot"
            quickSort(arr, pi + 1, high)  # Sắp xếp phần bên phải "pivot"
    # Hàm phân chia mảng dựa trên tần suất và giá trị
    
    def phanChia(arr, low, high):
        pivot = arr[high]  # Phần tử chốt (pivot) là phần tử cuối cùng
        i = low - 1  # i sẽ đánh dấu vị trí các phần tử nhỏ hơn "pivot"
        for j in range(low, high):
            # Điều kiện sắp xếp:
            # 1. Tần suất lớn hơn "pivot" sẽ được ưu tiên.
            # 2. Nếu tần suất bằng nhau, giá trị nhỏ hơn sẽ được ưu tiên.
            if arr[j]['count'] > pivot['count'] or \
               (arr[j]['count'] == pivot['count'] and arr[j]['val'] < pivot['val']):
                i += 1
                arr[i], arr[j] = arr[j], arr[i]  # Đổi chỗ các phần tử
        arr[i + 1], arr[high] = arr[high], arr[i + 1]  # Đặt "pivot" vào đúng vị trí
        return i + 1  # Trả về vị trí của "pivot"

    # Thực hiện QuickSort trên danh sách 'danhSach'
    quickSort(danhSach, 0, len(danhSach) - 1)

    # Bước 4: Tạo mảng kết quả từ danh sách đã sắp xếp
    ketQua = []
    for item in danhSach:
        ketQua.extend([item['val']] * item['count'])  # Thêm giá trị `val` vào mảng kết quả `count` lần

    return ketQua
arr = [2, 5, 2, 8, 5, 6, 8, 8]
# Gọi hàm và in kết quả
mangDaSapXep = sapXepTheoTanSuat(arr)
print("Mảng sau khi sắp xếp theo tần suất:", mangDaSapXep)


