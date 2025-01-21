from collections import Counter

# Hàm để tìm các phần tử trong mảng có tần suất xuất hiện nhiều hơn n/k lần
def printElements(arr, n, k):
    # Tính toán giá trị n/k
    x = n // k

    # Đếm tần suất của mỗi phần tử trong mảng sử dụng Counter
    mp = Counter(arr)
    
    # Duyệt qua các phần tử trong Counter và in ra các phần tử có tần suất > n/k
    for it in mp:
        if mp[it] > x:
            print(it)

if __name__ == '__main__':
    # Nhập mảng từ người dùng
    arr = list(map(int, input("Nhập các phần tử trong mảng (cách nhau bởi dấu cách): ").split()))
    
    # Tính số phần tử trong mảng
    n = len(arr)
    
    # Nhập giá trị k
    k = int(input("Nhập giá trị k: "))
    
    # Gọi hàm để tìm và in các phần tử có tần suất > n/k
    print("Các phần tử có tần suất xuất hiện nhiều hơn n/k lần là:")
    printElements(arr, n, k)
