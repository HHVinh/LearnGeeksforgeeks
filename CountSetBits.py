def count_set_bits(n):
    count = 0

    # Duyệt từng bit của n cho đến khi n trở thành 0
    while n:
        # Kiểm tra bit phải nhất (LSB) bằng cách thực hiện phép AND với 1
        count += n & 1  # Nếu bit phải nhất là 1, biến đếm sẽ tăng

        # Dịch n sang phải 1 bit để kiểm tra bit tiếp theo
        n >>= 1  # n >>= 1 tương đương với n = n / 2

    return count  # Trả về số bit 1 đã đếm được

# Nhập số nguyên từ người dùng
n = int(input("Nhập số nguyên: "))

# Gọi hàm count_set_bits để đếm số bit 1 trong n
result = count_set_bits(n)

# In kết quả
print(f"Số bit 1 trong {n} là: {result}")
