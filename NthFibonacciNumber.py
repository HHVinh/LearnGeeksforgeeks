def nth_fibonacci(n):
    if n <= 1:
        return n

    curr = 0   # Biến lưu trữ số Fibonacci hiện tại
    prev1 = 1  # Biến lưu trữ số Fibonacci trước đó (F(n-1))
    prev2 = 0  # Biến lưu trữ số Fibonacci trước nữa (F(n-2))

    for i in range(2, n + 1):
        # Tính giá trị Fibonacci hiện tại
        curr = prev1 + prev2
        # Cập nhật prev2 thành prev1 (F(n-2) trở thành F(n-1) cho vòng lặp tiếp theo)
        prev2 = prev1
        # Cập nhật prev1 thành curr (F(n-1) trở thành F(n) cho vòng lặp tiếp theo)
        prev1 = curr

    # Sau khi vòng lặp kết thúc, curr sẽ chứa số Fibonacci thứ n
    return curr

n = int(input("Nhập số n: "))

result = nth_fibonacci(n)
print(f"Số Fibonacci thứ {n} là: {result}")

