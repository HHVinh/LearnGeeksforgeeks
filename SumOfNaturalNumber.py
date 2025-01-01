def sumOfNaturalNumber(n):
    sum = 0
    for i in range(1,n+1):
        sum += i
    return sum

n = int(input("Hãy nhập một số tự nhiên bất kì: "))
if n < 1:
    print("Hãy nhập số tự nhiên lớn hơn 0!")
elif n == 1:
    print("1")
else:
    result = sumOfNaturalNumber(n)
    print(f"Kết quả tổng của các số từ 1 đến {n} là: {result}")
    