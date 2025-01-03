def factorialNumber(n):
    factorial = 1
    if n == 0: 
        return factorial
    for i in range(1, n + 1):
        factorial *= i
    return factorial

try:
    n = int(input("Hãy nhập một số nguyên dương bất kỳ: "))
    if n < 0:
        print("Số nhập vào phải là số nguyên dương!")
    else:
        result = factorialNumber(n)
        print(f"Giai thừa của số {n} là: {result}")
except ValueError:
    print("Vui lòng nhập một số nguyên hợp lệ!")
