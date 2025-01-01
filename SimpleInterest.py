def simpleInterest(p, t, r):
    return (p * t * r) / 100

# Nhập và chuyển đổi đầu vào
p, t, r = map(int, input("Hãy nhập lần lượt các hệ số p, t, r cách nhau bởi khoảng trắng: ").split())

# Gọi hàm và in kết quả
print(f"Lãi suất đơn là: {simpleInterest(p, t, r):.2f}")
