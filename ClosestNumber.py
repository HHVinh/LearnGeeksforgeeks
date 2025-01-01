def closestNumber(n, m) :
    q = int(n // m)
    n1 = m * q
    # Số gần nhất thứ hai có thể chia hết cho m (n2)
    if((n * m) > 0) :
        # Nếu n và m có cùng dấu (cả hai đều dương hoặc đều âm),ta lấy số chia hết cho m lớn hơn n1
        n2 = (m * (q + 1)) 
    else :
        # Nếu n và m có dấu khác nhau, ta lấy số chia hết cho m nhỏ hơn n1
        n2 = (m * (q - 1))
    # abs(n - n1) là khoảng cách giữa n và n1
    # abs(n - n2) là khoảng cách giữa n và n2
    if (abs(n - n1) < abs(n - n2)) :
        return n1
    return n2

# Nhập vào hai số n và m từ bàn phím
m, n = map(int, input("Hãy nhập hai số nguyên bất kì: ").split())

# In ra kết quả số gần nhất với m và chia hết cho n
print(f"Số nguyên gần {m} nhất chia hết cho {n} là: {closestNumber(m, n)}")
