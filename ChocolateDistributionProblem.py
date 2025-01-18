def findMinDiff(arr, m):
    n = len(arr)

    # Sắp xếp mảng các gói sô cô la theo thứ tự tăng dần
    arr.sort()

    # Khởi tạo sự khác biệt nhỏ nhất là vô cùng lớn
    minDiff = float('inf')

    # Duyệt qua tất cả các cửa sổ con có kích thước m
    for i in range(n - m + 1):
        # Tính sự khác biệt giữa phần tử cuối và phần tử đầu trong cửa sổ con
        diff = arr[i + m - 1] - arr[i]

        # Nếu sự khác biệt này nhỏ hơn sự khác biệt nhỏ nhất hiện tại, cập nhật
        if diff < minDiff:
            minDiff = diff

    return minDiff

if __name__ == "__main__":
    # Yêu cầu nhập mảng và số túi cần phân phối
    arr = list(map(int, input("Nhập các gói sô cô la (các số cách nhau bởi dấu cách): ").split()))
    m = int(input("Nhập số lượng túi cần phân phối: "))

    # Gọi hàm và in kết quả
    print("Sự khác biệt nhỏ nhất là:", findMinDiff(arr, m))
