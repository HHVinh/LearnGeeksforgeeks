class Point:
    # Lớp đại diện cho một điểm trong hệ tọa độ 2D
    def __init__(self, x, y):
        self.x = x  # Tọa độ x của điểm
        self.y = y  # Tọa độ y của điểm

def overlappingRectangles(l1, r1, l2, r2):
    # Nếu một hình chữ nhật nằm hoàn toàn bên trái hình kia
    if l1.x > r2.x or l2.x > r1.x: return False
    # Nếu một hình chữ nhật nằm hoàn toàn phía trên hình kia
    if r1.y < l2.y or r2.y < l1.y: return False
    # Nếu không rơi vào các trường hợp trên, hình chữ nhật giao nhau
    return True

if __name__ == "__main__":
    print("Nhập tọa độ cho hình chữ nhật 1:")
    l1_x, l1_y = map(int, input("Tọa độ góc trên trái (x, y): ").split())
    r1_x, r1_y = map(int, input("Tọa độ góc dưới phải (x, y): ").split())
    
    print("Nhập tọa độ cho hình chữ nhật 2:")
    l2_x, l2_y = map(int, input("Tọa độ góc trên trái (x, y): ").split())
    r2_x, r2_y = map(int, input("Tọa độ góc dưới phải (x, y): ").split())
    # Tạo các điểm
    l1, r1, l2, r2 = Point(l1_x, l1_y), Point(r1_x, r1_y), Point(l2_x, l2_y), Point(r2_x, r2_y)

    if overlappingRectangles(l1, r1, l2, r2):
        print("Hai hình chữ nhật giao nhau.")
    else:
        print("Hai hình chữ nhật không giao nhau.")
