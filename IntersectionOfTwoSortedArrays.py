def intersection(a, b):
    res = []  # Danh sách để lưu kết quả giao
    m = len(a)  # Độ dài của mảng a
    n = len(b)  # Độ dài của mảng b
    # Sử dụng thuật toán hai con trỏ để tìm giao
    i, j = 0, 0
    while i < m and j < n:
        # Bỏ qua các phần tử trùng lặp trong mảng a
        if i > 0 and a[i - 1] == a[i]:
            i += 1
            continue
        # So sánh phần tử tại a[i] và b[j]
        if a[i] < b[j]:  # Nếu a[i] nhỏ hơn b[j], tăng con trỏ i
            i += 1
        elif a[i] > b[j]:  # Nếu a[i] lớn hơn b[j], tăng con trỏ j
            j += 1
        else:  # Nếu a[i] bằng b[j], thêm vào danh sách kết quả
            res.append(a[i])
            i += 1
            j += 1
    return res  # Trả về danh sách giao
if __name__ == "__main__":
    
    a = list(map(int, input("Nhập phần tử của mảng a (đã sắp xếp): ").split()))
    b = list(map(int, input("Nhập phần tử của mảng b (đã sắp xếp): ").split()))
    res = intersection(a, b)
    print("Các phần tử chung của hai mảng là: ", " ".join(map(str, res)))
