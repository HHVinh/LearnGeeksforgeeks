def squareRoot(n):
    res = 1
    while res * res <= n:
        res += 1
    return res - 1

n = int(input("Nhập n: "))
print("Căn bậc 2 của",n, "là:",squareRoot(n))