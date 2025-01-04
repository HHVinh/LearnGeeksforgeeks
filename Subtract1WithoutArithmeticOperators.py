def subtractOne(x):
    # Khởi tạo biến m là 1 (đại diện cho bit thấp nhất)
    m = 1
    # Lặp cho đến khi tìm thấy bit 1 trong x
    while ((x & m) == False):  # Kiểm tra xem bit thấp nhất của x có phải là 0 không
        # Đảo bit của x với m (chuyển từ 0 thành 1)
        x = x ^ m
        # Di chuyển m sang trái một bit, tức là kiểm tra bit tiếp theo
        m = m << 1
    # Khi gặp bit 1, ta đảo bit đó (trừ đi 1 từ x)
    x = x ^ m
    # Trả về giá trị sau khi trừ 1
    return x

if __name__ == '__main__':
    # Yêu cầu người dùng nhập số n
    n = int(input("Nhập số n: "))
    
    # In ra kết quả sau khi trừ 1 từ n
    print(f"Kết quả sau khi trừ 1 từ {n} là: {subtractOne(n)}")
