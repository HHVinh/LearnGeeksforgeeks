def armstrong(n):
    # Bước 1: Chuyển số n thành chuỗi để có thể xử lý từng chữ số
    number = str(n)
    # Bước 2: Tính số chữ số trong n
    n_digits = len(number)
    # Bước 3: Tính tổng các lũy thừa của các chữ số trong n
    output = sum(int(i) ** n_digits for i in number)  # Dùng sum() và list comprehension để tối ưu hơn
    # Bước 4: Kiểm tra nếu tổng lũy thừa bằng số ban đầu
    return output == int(number)  # Nếu bằng nhau, n là số Armstrong


n = int(input("Nhập số để kiểm tra: "))

if armstrong(n):
    print(f"{n} là số Armstrong!")
else:
    print(f"{n} không phải là số Armstrong!")

    