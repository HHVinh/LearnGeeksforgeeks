MAX_CHAR = 26  # Số lượng ký tự trong bảng chữ cái (a-z)

# Hàm sắp xếp chuỗi theo thứ tự bảng chữ cái
def sortString(s):
    charCount = [0] * MAX_CHAR  # Mảng đếm số lần xuất hiện của các ký tự
    
    # Đếm số lần xuất hiện của từng ký tự trong chuỗi
    for ch in s:
        charCount[ord(ch) - ord('a')] += 1

    # In các ký tự theo thứ tự bảng chữ cái
    sorted_string = ""  # Chuỗi chứa kết quả sắp xếp
    for i in range(MAX_CHAR):
        sorted_string += chr(i + ord('a')) * charCount[i]  # Ghép các ký tự
    return sorted_string

if __name__ == "__main__":
    # Yêu cầu người dùng nhập chuỗi
    s = input("Nhập chuỗi gồm các ký tự thường (a-z): ").strip()
    
    # Kiểm tra chuỗi hợp lệ
    if not s.isalpha() or not s.islower():
        print("Chuỗi chỉ được chứa các ký tự thường (a-z).")
    else:
        # Gọi hàm sắp xếp và hiển thị kết quả
        result = sortString(s)
        print(f"Chuỗi sau khi sắp xếp: {result}")
