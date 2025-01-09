def cost(a, n):
    # Tính chi phí tối thiểu là (n-1) nhân với phần tử nhỏ nhất trong mảng.
    return ((n - 1) * min(a))

if __name__ == "__main__":
    n = int(input("Nhập số lượng phần tử trong mảng: "))
    
    # Nhập mảng a
    a = list(map(int, input(f"Nhập {n} phần tử của mảng cách nhau bởi khoảng trắng: ").split()))
    
    # Kiểm tra xem số phần tử trong mảng có đúng với n không
    if len(a) != n:
        print("Số lượng phần tử không khớp với giá trị nhập.")
    else:
        # Tính và in kết quả chi phí
        result = cost(a, n)
        print(f"Chi phí tối thiểu là: {result}")
