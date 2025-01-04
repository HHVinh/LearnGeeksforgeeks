def UCLN(a, b):  # Hàm tìm ước chung lớn nhất (UCLN) của hai số a và b
    if a == 0:  # Nếu a = 0, thì UCLN là b
        return b  # Trả về b
    return UCLN(b % a, a)  # Đệ quy: Gọi lại UCLN với b % a và a

def sumTwoFraction(tu1, mau1, tu2, mau2):  # Hàm tính tổng hai phân số
    mau3 = mau1 * mau2  # Tính mẫu số chung bằng cách nhân hai mẫu số
    tu3 = mau1 * tu2 + mau2 * tu1  # Tính tử số tổng dựa trên mẫu số chung
    k = UCLN(tu3, mau3)  # Tìm UCLN của tử số và mẫu số tổng
    tu4 = tu3 // k  # Rút gọn tử số bằng cách chia cho UCLN
    mau4 = mau3 // k  # Rút gọn mẫu số bằng cách chia cho UCLN
    return tu4, mau4  # Trả về tử và mẫu đã rút gọn

# Nhập tử và mẫu của phân số, sau đó phân tách chúng bằng dấu "/"
tu1, mau1 = map(int, input("Nhập tử1/mẫu1: ").split("/"))  
tu2, mau2 = map(int, input("Nhập tử2/mẫu2: ").split("/"))  

if mau1 == 0 or mau2 == 0:  # Kiểm tra nếu bất kỳ mẫu số nào bằng 0
    print("Mẫu của phân số phải khác 0!")  # Thông báo lỗi
    exit()  # Thoát chương trình

print("\nPhân số 1 là:", tu1, "/", mau1)  
print("\nPhân số 2 là:", tu2, "/", mau2)  
tu, mau = sumTwoFraction(tu1, mau1, tu2, mau2)  
if tu % mau == 0:  # Kiểm tra nếu phân số tổng là một số nguyên (tử chia hết cho mẫu)
    print("\n\nTổng 2 phân số là:", tu // mau)  # In tổng dưới dạng số nguyên
else:  
    print("\n\nTổng 2 phân số là:", tu, "/", mau)  # In tổng dưới dạng phân số tối giản
