def intersection(a, b):
    # Chuyển mảng a thành set (tập hợp) để loại bỏ phần tử trùng lặp
    sa = set(a)

    res = []  # Danh sách lưu kết quả giao của 2 mảng

    # Duyệt mảng b
    for elem in b:
        # Nếu phần tử trong b có mặt trong set sa
        if elem in sa:
            res.append(elem)  # Thêm phần tử vào kết quả
            sa.remove(elem)   # Xóa phần tử khỏi set để tránh thêm lại phần tử trùng

    return res  # Trả về kết quả

# Nhập mảng từ người dùng
a = list(map(int, input("Nhập mảng a (các phần tử cách nhau bởi dấu cách): ").split()))
b = list(map(int, input("Nhập mảng b (các phần tử cách nhau bởi dấu cách): ").split()))

# Gọi hàm intersection để tìm phần tử chung
res = intersection(a, b)

# In kết quả
print("Phần tử chung giữa 2 mảng:", " ".join(map(str, res)))
