def isEven(n):
    # Kiểm tra nếu n chia hết cho 2
    return n % 2 == 0

# Nhập số từ người dùng
n = int(input("Hãy nhập số tự nhiên bất kỳ: "))

# Kiểm tra số đó là chẵn hay lẻ
if isEven(n):
    print("True")
else:
    print("False")
