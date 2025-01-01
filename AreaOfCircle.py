import math

def findArea(r):
    return math.pi * r * r

r = float(input("Hãy nhập chiều dài của đường kính hình tròn: "))

area = findArea(r)
print(f"{area:.5f}")