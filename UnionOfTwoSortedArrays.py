def findUnion(a, b):
    res = []  # Khởi tạo mảng kết quả để chứa hợp nhất
    n, m = len(a), len(b)  # Lấy kích thước của mảng a và b
    i, j = 0, 0  # Khởi tạo con trỏ i cho mảng a và j cho mảng b
    # Duyệt qua hai mảng a và b để hợp nhất chúng, bỏ qua phần tử trùng lặp
    while i < n and j < m: 
        # Bỏ qua phần tử trùng lặp trong mảng a
        if i > 0 and a[i - 1] == a[i]:
            i += 1
            continue
        # Bỏ qua phần tử trùng lặp trong mảng b
        if j > 0 and b[j - 1] == b[j]:
            j += 1
            continue
        # Chọn và thêm phần tử nhỏ hơn vào kết quả và di chuyển con trỏ
        if a[i] < b[j]:
            res.append(a[i])
            i += 1
        elif a[i] > b[j]:
            res.append(b[j])
            j += 1
        # Nếu phần tử bằng nhau, thêm vào kết quả và di chuyển cả hai con trỏ
        else:
            res.append(a[i])
            i += 1
            j += 1
    # Thêm các phần tử còn lại của mảng a vào kết quả
    while i < n:
        if i > 0 and a[i - 1] == a[i]:  # Bỏ qua phần tử trùng lặp trong mảng a
            i += 1
            continue
        res.append(a[i])
        i += 1
    # Thêm các phần tử còn lại của mảng b vào kết quả
    while j < m:
        if j > 0 and b[j - 1] == b[j]:  # Bỏ qua phần tử trùng lặp trong mảng b
            j += 1
            continue
        res.append(b[j])
        j += 1
    return res  # Trả về mảng kết quả hợp nhất

# Đoạn mã chính để nhập mảng và gọi hàm
if __name__ == "__main__":
    # Nhập mảng a từ người dùng
    a = list(map(int, input("Nhập phần tử mảng a, cách nhau bằng dấu cách: ").split()))  # Nhập mảng a
    # Nhập mảng b từ người dùng
    b = list(map(int, input("Nhập phần tử mảng b, cách nhau bằng dấu cách: ").split()))  # Nhập mảng b
    # Gọi hàm findUnion để tìm hợp nhất
    res = findUnion(a, b)
    
    # In kết quả
    print("Hợp nhất của hai mảng là: ", end="")
    for x in res:
        print(x, end=" ")  # In từng phần tử của mảng kết quả
