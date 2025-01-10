def subarraySum(arr):
    n = len(arr)
    result = 0

    # Tính tổng các phần tử của mảng con sử dụng công thức
    # arr[i] đóng góp vào (i+1) * (n-i) mảng con
    # (i+1): số lần arr[i] xuất hiện ở đầu mảng con
    # (n-i): số lần arr[i] xuất hiện ở cuối mảng con
    for i in range(n):
        result += arr[i] * (i + 1) * (n - i)

    # Trả về tổng của tất cả mảng con
    return result

# Chương trình chính
if __name__ == "__main__":

    inputArray = list(map(int, input("Nhập các phần tử của mảng (cách nhau bởi dấu cách): ").split()))

    totalSum = subarraySum(inputArray)

    print("Tổng các phần tử trong tất cả các mảng con là:", totalSum)
