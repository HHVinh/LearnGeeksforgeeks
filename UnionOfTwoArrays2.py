def findUnion(a, b):
    # Union trực tiếp giữa hai set a và b
    return list(set(a) | set(b))  # Toán tử | thực hiện hợp nhất giữa hai set

# Nhập dữ liệu từ người dùng
if __name__ == "__main__":
    # Nhập mảng a
    a = list(map(int, input("Nhập mảng a (các phần tử cách nhau bằng dấu cách): ").split()))
    
    # Nhập mảng b
    b = list(map(int, input("Nhập mảng b (các phần tử cách nhau bằng dấu cách): ").split()))

    # Gọi hàm tìm hợp nhất và in kết quả
    res = findUnion(a, b)

    # In kết quả hợp nhất
    print("Hợp nhất của hai mảng là: ")
    for i in res:
        print(i, end = ' ')
