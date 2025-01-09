def zeroesToEnd(arr):
    n = len(arr)
    temp = [0] * n  # Tạo mảng temp[] để lưu trữ các giá trị không phải 0
    # Để theo dõi chỉ số trong mảng temp[]
    count = 0
    # Sao chép các phần tử không phải 0 vào mảng temp[]
    for i in range(n):
        if arr[i] != 0:
            temp[count] = arr[i]
            count += 1

    # Điền các số 0 vào các vị trí còn lại trong temp[]
    while count < n:
        temp[count] = 0
        count += 1
    # Sao chép các phần tử từ temp[] vào arr[]
    for i in range(n):
        arr[i] = temp[i]

if __name__ == "__main__":
    arr = list(map(int, input("Nhập các phần tử của mảng, cách nhau bởi khoảng trắng: ").split()))
    zeroesToEnd(arr)
    print("Mảng sau khi di chuyển các số 0 vào cuối là: ", end="")
    for num in arr:
        print(num, end=" ")
