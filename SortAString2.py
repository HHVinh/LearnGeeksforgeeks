# Hàm sắp xếp chuỗi theo thứ tự bảng chữ cái
def sortStringOptimized(s):
    return "".join(sorted(s))  # Sắp xếp chuỗi và ghép thành kết quả

if __name__ == "__main__":
    # Yêu cầu người dùng nhập chuỗi
    s = input("Nhập chuỗi gồm các ký tự thường (a-z): ").strip()

    # Kiểm tra chuỗi hợp lệ
    if not s.isalpha() or not s.islower():
        print("Chuỗi chỉ được chứa các ký tự thường (a-z).")
    else:
        # Gọi hàm sắp xếp và hiển thị kết quả
        result = sortStringOptimized(s)
        print(f"Chuỗi sau khi sắp xếp: {result}")
