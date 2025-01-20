def getSecondLargest(arr):
    n = len(arr)\
    # Khởi tạo giá trị ban đầu cho số lớn nhất và lớn thứ hai
    largest = -1
    secondLargest = -1

    for i in range(n):
        # Nếu arr[i] > largest, cập nhật secondLargest = largest và largest = arr[i]
        if arr[i] > largest:
            secondLargest = largest
            largest = arr[i]
        # Nếu arr[i] < largest và arr[i] > secondLargest, cập nhật secondLargest = arr[i]
        elif arr[i] < largest and arr[i] > secondLargest:
            secondLargest = arr[i]
    return secondLargest

if __name__ == "__main__":
    # Yêu cầu nhập mảng từ người dùng
    arr = list(map(int, input("Nhập các phần tử của mảng, cách nhau bởi khoảng trắng: ").split()))

    # Gọi hàm và in kết quả
    result = getSecondLargest(arr)

    if result == -1:
        print("Không tìm thấy phần tử lớn thứ hai (mảng không đủ phần tử hoặc tất cả các phần tử giống nhau).")
    else:
        print(f"Phần tử lớn thứ hai trong mảng là: {result}")
