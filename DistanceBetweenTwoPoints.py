import math

def distanceBetweenTwoPoint(x1, y1, x2, y2):
    return (((x2 - x1)**2 + (y2 - y1)**2)**0.5)
    # Hoặc dùng hàm return math.sqrt(math.pow(x2 - x1, 2) + math.pow(y2 - y1, 2) * 1.0)

x1, y1, x2, y2 = map(float,input("Hãy nhập lần lượt 4 tọa độ x1:y1 x2:y2 cách nhau bởi khoảng trắng: ").split())

print(f"\nKhoảng cách giữa 2 điểm {x1}:{y1} và {x2}:{y2} là: {distanceBetweenTwoPoint(x1,y1,x2,y2)}")

# Hoặc giảm số thập phân
distance = distanceBetweenTwoPoint(x1,y1,x2,y2)
print(f"\nKhoảng cách giữa 2 điểm {x1}:{y1} và {x2}:{y2} là: {round(distance,5)}")
print(f"\nKhoảng cách giữa 2 điểm {x1}:{y1} và {x2}:{y2} là: {distance:.5f}")

