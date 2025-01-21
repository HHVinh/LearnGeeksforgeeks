import heapq

# Hàm tìm phần tử nhỏ thứ k trong mảng 2 chiều
def find_kth_smallest(matrix, k):
    # Bước 1: "Dẹt" (flatten) mảng 2 chiều thành 1 chiều
    # Sử dụng list comprehension để kết hợp tất cả các phần tử trong các dòng
    flattened = [item for sublist in matrix for item in sublist]
    
    # Bước 2: Tìm k phần tử nhỏ nhất bằng heapq.nsmallest
    # heapq.nsmallest(k, flattened) trả về k phần tử nhỏ nhất
    return heapq.nsmallest(k, flattened)[-1]  # Lấy phần tử cuối cùng trong k phần tử nhỏ nhất

# Hàm nhập mảng 2 chiều
def nhap_mang(m, n):
    # Khởi tạo mảng rỗng
    matrix = []
    
    # Nhập từng phần tử cho mảng 2 chiều
    print("Nhập các phần tử cho mảng 2 chiều:")
    for i in range(m):
        row = []  # Dùng một mảng con (dòng) để nhập dữ liệu
        for j in range(n):
            value = int(input(f"Nhập phần tử tại vị trí [{i}][{j}]: "))
            row.append(value)  # Thêm phần tử vào dòng
        matrix.append(row)  # Thêm dòng vào mảng 2 chiều
    return matrix

# Hàm xuất mảng 2 chiều
def xuat_mang(matrix):
    print("Mảng 2 chiều là:")
    for row in matrix:
        print(row)  # In từng dòng của mảng

# Chương trình chính
def main():
    # Nhập số lượng hàng và cột
    m = int(input("Nhập số lượng hàng: "))
    n = int(input("Nhập số lượng cột: "))
    
    # Nhập mảng 2 chiều
    matrix = nhap_mang(m, n)
    
    # Xuất mảng 2 chiều
    xuat_mang(matrix)
    
    # Nhập k để tìm phần tử nhỏ thứ k
    k = int(input("Nhập k để tìm phần tử nhỏ thứ k: "))
    
    # Gọi hàm tìm phần tử nhỏ thứ k
    result = find_kth_smallest(matrix, k)
    print(f"Phần tử nhỏ thứ {k} là: {result}")

# Chạy chương trình chính
if __name__ == "__main__":
    main()
