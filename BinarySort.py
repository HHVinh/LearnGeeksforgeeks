def tachSo0VaSo1(arr):
    viTriDau = 0  # Chỉ số bắt đầu
    viTriCuoi = len(arr) - 1  # Chỉ số kết thúc

    # Duyệt danh sách để sắp xếp các số 0 về đầu và số 1 về cuối
    while viTriDau < viTriCuoi:
        if arr[viTriDau] == 1:  # Nếu phần tử ở đầu là 1
            if arr[viTriCuoi] != 1:  # Nếu phần tử ở cuối không phải là 1
                # Hoán đổi giá trị
                arr[viTriDau], arr[viTriCuoi] = arr[viTriCuoi], arr[viTriDau]
                viTriDau += 1  # Tăng chỉ số bắt đầu
                viTriCuoi -= 1  # Giảm chỉ số kết thúc
            else:
                viTriCuoi -= 1  # Giảm chỉ số kết thúc khi phần tử cuối là 1
        else:
            viTriDau += 1  # Tăng chỉ số bắt đầu khi phần tử đầu là 0
try:
    arr = list(map(int, input("Nhập danh sách các số 0 và 1, cách nhau bằng dấu cách: ").split()))
    if all(x in (0, 1) for x in arr):  # Kiểm tra danh sách chỉ chứa số 0 và 1
        tachSo0VaSo1(arr)
        print("Danh sách sau khi tách là:", arr)
    else:
        print("Danh sách chỉ được chứa các số 0 và 1.")
except ValueError:
    print("Vui lòng nhập danh sách hợp lệ.")
