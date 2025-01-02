import math

def primeNumber(num):
    if num < 2:
        return False
    if num == 2 or num == 3:
        return True
    if num % 2 == 0 or num % 3 == 0:
        return False
    # Kiểm tra các số dạng 6k ± 1
    i = 5  # Bắt đầu từ 5 (số đầu tiên dạng 6k - 1)
    # Kiểm tra các số trong khoảng từ 5 đến căn bậc hai của num
    while i <= math.sqrt(num):  
        # Nếu num chia hết cho i hoặc i + 2, không phải số nguyên tố
        if num % i == 0 or num % (i + 2) == 0:
            return False
        # Tăng i thêm 6 để kiểm tra các số dạng 6k ± 1 tiếp theo
        i += 6  

    # Nếu không tìm thấy ước số nào, num là số nguyên tố
    return True

num = int(input("Hãy nhập một số nguyên bất kì: "))
if primeNumber(num):
    print("Yes")
else:
    print("No")

    