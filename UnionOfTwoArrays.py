def findUnion(a, b):
    st = set()  # Khởi tạo một set để lưu các phần tử duy nhất
    # Thêm tất cả phần tử của mảng a vào set
    for i in range(len(a)):
        st.add(a[i])
    # Thêm tất cả phần tử của mảng b vào set
    for i in range(len(b)):
        st.add(b[i])
    # Khởi tạo một list để lưu kết quả hợp nhất
    res = []                           
    # Duyệt qua các phần tử trong set và thêm vào list
    for it in st:
        res.append(it)
    return res

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
