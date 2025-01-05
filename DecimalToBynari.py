n = int(input("Nhập một số nguyên thập phân: "))

# Chuyển đổi sang nhị phân
# Hàm bin(n) trả về một chuỗi biểu diễn số nhị phân của n với tiền tố '0b'
binary_with_prefix = bin(n)  
# Loại bỏ tiền tố '0b' bằng cách lấy chuỗi từ ký tự thứ 3 (vị trí 2 trở đi)
binary_without_prefix = binary_with_prefix[2:]

# In kết quả
print(f"Số nhị phân của {n} là: {binary_without_prefix}")
