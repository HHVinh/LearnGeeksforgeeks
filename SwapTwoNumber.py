def swapTwoNumber(a,b):
   
    print(f"a = {a}, b = {b} \n")

    print("Hoán đổi 2 số, kết quả là: \n")

    a,b = b,a

    print(f"a = {a}, b = {b}\n")

a, b = map(int, input("Hãy nhập 2 số bất kì cần hoán đổi: ").split())

swapTwoNumber(a,b)
