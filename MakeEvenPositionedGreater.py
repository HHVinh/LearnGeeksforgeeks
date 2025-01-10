def rearrangeArray(arr):
    n = len(arr)

    # Lặp qua mảng để thay đổi các phần tử sao cho
    # các phần tử ở vị trí chẵn sẽ lớn hơn hoặc bằng phần tử ở vị trí lẻ
    for i in range(1, n):
        
        # Kiểm tra nếu chỉ số là chẵn (theo chỉ số 1-based), tức là i+1 là số chẵn
        if (i + 1) % 2 == 0:
            # Đảm bảo phần tử hiện tại lớn hơn hoặc bằng phần tử trước đó
            if arr[i] < arr[i - 1]:
                arr[i], arr[i - 1] = arr[i - 1], arr[i]
        else:
            # Kiểm tra nếu phần tử hiện tại lớn hơn phần tử trước đó
            if arr[i] > arr[i - 1]:
                arr[i], arr[i - 1] = arr[i - 1], arr[i]

    return arr


if __name__ == "__main__":

    inputArray = list(map(int, input("Nhập các phần tử của mảng (cách nhau bởi dấu cách): ").split()))
    resultArray = rearrangeArray(inputArray)

    print("Mảng sau khi thay đổi: ", " ".join(map(str, resultArray)))
