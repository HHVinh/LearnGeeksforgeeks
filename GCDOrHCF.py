def gcd(a, b):
    # Vòng lặp tiếp tục khi cả a và b đều khác 0
    while(a > 0 and b > 0):
        # Nếu a lớn hơn b, ta tính phần dư của a chia cho b và gán lại giá trị cho a
        if a > b:
            a = a % b
        # Nếu b lớn hơn a, ta tính phần dư của b chia cho a và gán lại giá trị cho b
        else:
            b = b % a
    
    # Nếu a == 0, GCD chính là b
    if a == 0:
        return b
    # Nếu b == 0, GCD chính là a
    return a

if __name__ == '__main__':
    a = int(input("Nhập a: "))
    b = int(input("Nhập b: "))
    
    result = gcd(a, b)
    print(f'GCD của {a} và {b} là: {result}')
