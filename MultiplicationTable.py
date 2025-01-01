def multiplicationTable(n):
    # In bảng cửu chương của số n
    for i in range(1, 11):
        print(f"{n} x {i} = {n * i}")

# Nhập số từ người dùng
n = int(input("Hãy nhập một số tự nhiên bất kỳ: "))

print(f"\nBảng cửu chương của {n}:\n")
multiplicationTable(n)
