def find_repeating(arr):
    n = len(arr)  # Độ dài của mảng
    res = 0  # Khởi tạo biến kết quả bằng 0

    # Duyệt qua tất cả các số từ 1 đến n-1 (vì n phần tử trong mảng, 
    # Chúng ta cần xét tất cả các số từ 1 đến n-1 và mảng chỉ có n-1 số khác nhau)
    for i in range(n - 1):
        # XOR tất cả các số từ 1 đến n-1 và phần tử trong mảng
        res ^= (i + 1) ^ arr[i]
        # res ^= (i + 1) sẽ XOR với các số từ 1 đến n-1
        # res ^= arr[i] sẽ XOR với các phần tử trong mảng
        # XOR giúp loại bỏ các cặp số trùng nhau và sẽ chỉ còn số bị lặp

    # Cuối cùng, XOR với phần tử cuối cùng trong mảng
    res ^= arr[n - 1]

    return res  # Trả về kết quả là phần tử bị lặp

arr = list(map(int, input("Nhập các phần tử mảng, cách nhau bởi dấu cách: ").split()))
print("Số bị lặp lại trong mảng là:", find_repeating(arr))  # In ra số bị lặp
