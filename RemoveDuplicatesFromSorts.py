def removeDuplicates(arr):
    seen = set()
    
    # Để duy trì kích thước mới của mảng
    idx = 0

    for i in range(len(arr)):
        if arr[i] not in seen:
            seen.add(arr[i])
            arr[idx] = arr[i]
            idx += 1

    # Trả về kích thước của mảng với các phần tử duy nhất
    return idx

if __name__ == "__main__":
    arr = list(map(int, input("Nhập các phần tử của mảng cách nhau bởi khoảng trắng: ").split()))
    
    # Sắp xếp mảng trước khi loại bỏ các phần tử trùng lặp
    arr.sort()

    # Loại bỏ các phần tử trùng lặp và lấy kích thước mới
    newSize = removeDuplicates(arr)

    print("Mảng sau khi loại bỏ các phần tử trùng lặp: ")
    for i in range(newSize):
        print(arr[i], end=" ")
