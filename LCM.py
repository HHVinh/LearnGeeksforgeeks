import math

def lcm(a, b):
    # Công thức tính LCM: LCM(a, b) = (a * b) / GCD(a, b)
    return abs(a * b) // math.gcd(a, b)

a = int(input("Nhập a: "))
b = int(input("Nhập b: "))

result = lcm(a, b)
print(f'LCM của {a} và {b} là: {result}')
