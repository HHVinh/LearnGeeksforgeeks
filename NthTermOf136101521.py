def nth_term(n):
    return n * (n + 1) // 2  # Tính toán trực tiếp

# Input from user
n = int(input("Nhập số nguyên dương n: "))
print(f"N-th term trong dãy là: {nth_term(n)}")
