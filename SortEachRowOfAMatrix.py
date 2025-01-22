# Hàm sắp xếp từng hàng trong ma trận bằng Bubble Sort
def sortRowWiseBubbleSort(matrix):
    # Duyệt qua từng hàng trong ma trận
    for i in range(len(matrix)):
        # Sắp xếp nổi bọt cho từng hàng
        for j in range(len(matrix[i])):
            for k in range(len(matrix[i]) - j - 1):
                if matrix[i][k] > matrix[i][k + 1]:
                    # Hoán đổi hai phần tử nếu phần tử trước lớn hơn phần tử sau
                    matrix[i][k], matrix[i][k + 1] = matrix[i][k + 1], matrix[i][k]
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
    print("Sắp xếp hàng trong ma trận bằng Bubble Sort")
    matrix = inputMatrix()
    sortRowWiseBubbleSort(matrix)
