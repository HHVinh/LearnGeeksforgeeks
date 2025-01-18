# Hàm tìm phần tử chung của 2 mảng
def intersection(a, b):
    return list(set(a) & set(b))

# Nhập mảng từ người dùng
a = list(map(int, input("Nhập mảng a (các phần tử cách nhau bởi dấu cách): ").split()))
b = list(map(int, input("Nhập mảng b (các phần tử cách nhau bởi dấu cách): ").split()))

# Gọi hàm intersection để tìm phần tử chung
res = intersection(a, b)

# In kết quả
print("Phần tử chung giữa 2 mảng:", " ".join(map(str, res)))
