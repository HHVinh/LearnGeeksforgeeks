def getAlternates(arr):
    res = []
    # Lặp qua các phần tử cách nhau một vị trí
    for i in range(0, len(arr), 2):
        res.append(arr[i])
    return res

if __name__ == "__main__":

    n = int(input("Nhập số lượng phần tử của mảng: "))
    # Khởi tạo mảng rỗng và nhập các phần tử
    arr = []
    print(f"Nhập {n} phần tử của mảng:")
    for i in range(n):
        num = int(input(f"Phần tử thứ {i + 1}: "))
        arr.append(num)
    
    res = getAlternates(arr)
    print("Các phần tử cách nhau một vị trí:", " ".join(map(str, res)))
