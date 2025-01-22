# Hàm sắp xếp phần tử âm về cuối mà không thay đổi thứ tự
def segregateElementsInPlace(arr):
    # Tạo một mảng tạm thời để giữ thứ tự ban đầu
    temp = arr[:]
    index = 0

    # Đặt các số dương trước
    for value in temp:
        if value >= 0:
            arr[index] = value
            index += 1

    # Đặt các số âm sau
    for value in temp:
        if value < 0:
            arr[index] = value
            index += 1

# Hàm chính
if __name__ == "__main__":
    
    arr = list(map(int,input("Nhập các phần tử của mảng: ").split()))

    # Gọi hàm sắp xếp
    segregateElementsInPlace(arr)

    # Xuất mảng sau khi sắp xếp
    print("Mảng sau khi di chuyển các số âm về cuối:", arr)
