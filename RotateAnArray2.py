def rotateArray(arr, k):
    n = len(arr)
    k = k % n  # Xử lý nếu k > n
    arr = arr[::-1]  # Bước 1: Đảo ngược toàn bộ mảng
    arr[:k] = arr[:k][::-1]  # Bước 2: Đảo ngược phần đầu tiên
    arr[k:] = arr[k:][::-1]  # Bước 3: Đảo ngược phần còn lại
    return arr

arr = list(map(int, input("Hãy nhập các phần tử của mảng cách nhau bởi khoảng trắng: ").split()))
n = len(arr)
a = int(input("Hãy nhập số lần xoay vòng mảng: "))
k = a % n  # Số lần xoay thực sự (tính modulo)

# Kết quả
print("Mảng sau khi được xoay vòng", a, "lần là:", rotateArray(arr, k))
