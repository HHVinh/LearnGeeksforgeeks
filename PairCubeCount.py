import math
def pairCubeCount(n):
    if n == 0:
        return 0
    count = 0
    nCan3 = round(pow(n, 1 / 3))

    # Duyệt qua tất cả các số từ 1 đến căn bậc ba của n vì a^3 không thể >= n
    for i in range(1, nCan3 + 1):
        a3 = i * i * i  # Tính lập phương của i, tức là i^3
        b3 = n - a3  # Tính hiệu giữa n và a^3
        
        # Kiểm tra xem b3 có phải là lập phương của một số nguyên không
        b = round(pow(b3, 1 / 3))  # Tính căn bậc ba của b3 và làm tròn
        if b * b * b == b3:
            count += 1
            print(f"\nCặp số a và b là: {i} - {b}")
    return count

# Phần kiểm tra chương trình
if __name__ == "__main__":
    n = int(input("Nhập giá trị n: "))
    print(f"\nSố cặp a - b là: {pairCubeCount(n)}")