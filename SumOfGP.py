def sumOfGP(a, r, n):
    if r == 1:
        return a * n  # Nếu r = 1, tổng là n * a
    else:
        return a * (1 - r**n) / (1 - r)

a = int(input("Hãy nhập phần tử a: "))
r = float(input("Hãy nhập hệ r: "))
n = int(input("Hãy nhập số lượng phần tử cấp số nhân: "))

# Công thức tính phần tử cuối cùng trong cấp số nhân: an = a * r^(n-1)
soCuoi = a * (r ** (n - 1))
b = a
arr = []
for i in range(n):
    arr.append(b)
    b *= r

print(f"\nMảng cấp số nhân là: {arr}\n")

print(f"Tổng các phần tử của cấp số nhân từ {a} đến {soCuoi} là: {sumOfGP(a,r,n)}")

