def sumOfDigits(num):
    sum = 0
    while num > 0:
        sum += num % 10
        num //= 10
    return sum

num = int(input("Hãy nhập một số bất kì: "))
print(f"\nTổng các chữ số của số {num} là: {sumOfDigits(num)}")
