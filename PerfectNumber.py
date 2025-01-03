def isPerfect(n):
    sum = 1  # Bắt đầu với 1 vì 1 luôn là ước số của bất kỳ số nguyên dương nào
    i = 2
    while i * i <= n:  # Chỉ cần xét các số từ 2 đến căn bậc 2 của n
        if n % i == 0:  # Nếu i là ước số của n
            sum = sum + i + n // i  # Thêm cả i và n/i vào tổng
        i += 1  # Tiếp tục kiểm tra các số tiếp theo
    
    # Nếu tổng các ước số bằng chính n (trừ chính nó), thì n là số hoàn hảo
    return (True if sum == n and n != 1 else False)

n = int(input("Nhập n: "))
if isPerfect(n):
    print(n, "là số hoàn hảo")
else:
    print(n, "không phải là số hoàn hảo")
