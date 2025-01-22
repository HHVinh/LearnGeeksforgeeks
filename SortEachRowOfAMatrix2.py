# Hàm sắp xếp từng hàng trong ma trận bằng sort()
def sortRowWiseSortFunction(matrix):
    # Sử dụng hàm sort() cho từng hàng
    for row in matrix:
        row.sort()

    # In ma trận sau khi sắp xếp
    print("Ma trận sau khi sắp xếp:")
    for row in matrix:
        print(" ".join(map(str, row)))

# Hàm nhập ma trận từ người dùng
def inputMatrix():
    rows = int(input("Nhập số hàng của ma trận: "))
    cols = int(input("Nhập số cột của ma trận: "))
    matrix = []
    for i in range(rows):
        row = list(map(int, input(f"Nhập các phần tử của hàng {i + 1}, cách nhau bởi khoảng trắng: ").split()))
        matrix.append(row)
    return matrix

# Chương trình chính
if __name__ == "__main__":
    print("Sắp xếp hàng trong ma trận bằng sort()")
    matrix = inputMatrix()
    sortRowWiseSortFunction(matrix)
