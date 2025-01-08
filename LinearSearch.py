def search(arr, N, x):
    for i in range(0, N):  # Lặp qua từng phần tử trong mảng
        if arr[i] == x:  # Nếu tìm thấy x
            return i  # Trả về vị trí
    return -1  # Trả về -1 nếu không tìm thấy

if __name__ == "__main__":
    N = int(input("Nhập số lượng phần tử của mảng: "))

    arr = []
    print(f"Nhập {N} phần tử cho mảng:")
    for i in range(N):
        num = int(input(f"Phần tử thứ {i + 1}: "))
        arr.append(num)

    x = int(input("Nhập phần tử cần tìm trong mảng: "))

    result = search(arr, N, x)
    
    if result == -1:
        print(f"Phần tử {x} không tồn tại trong mảng.")
    else:
        print(f"Phần tử {x} nằm ở vị trí (index) {result}.")
