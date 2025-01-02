def validTriangle(a,b,c):
    return (a+b>c and a+c>b and b+c>a)

a,b,c = map(float,input("Hãy nhập độ dài lần lượt của 3 cạnh cần kiểm tra tam giác: ").split())
if (validTriangle(a,b,c)):
    print(f"{a} {b} {c} là ba cạnh của tam giác")
else: 
    print(f"{a} {b} {c} không là ba cạnh của tam giác")