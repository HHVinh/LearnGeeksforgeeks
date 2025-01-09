def minOps(arr, n, k):
    
    max1 = max(arr)
    res = 0  # Biến lưu trữ số lượng phép toán cần thực hiện

    for i in range(0, n):
        # Kiểm tra xem phần tử arr[i] có thể trở thành max1 hay không
        # Nếu không chia hết cho k, tức là không thể sử dụng bước nhảy k để đạt max1
        if ((max1 - arr[i]) % k != 0):
            return -1  # Trả về -1 nếu không thể làm cho tất cả phần tử bằng nhau

        # Nếu có thể, cộng số phép toán cần thực hiện vào res
        else:
            res += (max1 - arr[i]) // k  # Chia chênh lệch cho k để tính số phép cộng
    return int(res)

if __name__ == "__main__":
    arr = list(map(int, input("Nhập các phần tử của mảng cách nhau bởi dấu cách: ").split()))
    
    n = len(arr)  # Lấy độ dài mảng
    k = int(input("Nhập bước nhảy k: "))  # Yêu cầu nhập bước nhảy k

    # Tính toán và in ra kết quả
    result = minOps(arr, n, k)
    if result == -1:
        print("Không thể làm tất cả phần tử bằng nhau với bước nhảy k.")
    else:
        print(f"Số phép toán tối thiểu cần thực hiện để làm tất cả phần tử bằng nhau là: {result}")
