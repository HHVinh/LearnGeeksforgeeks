# Hàm sắp xếp mảng theo dạng sóng (wave form)
def sortInWave(arr, n):
    # Duyệt qua các phần tử ở chỉ số chẵn
    for i in range(0, n , 2):
        # Nếu phần tử tại vị trí chẵn nhỏ hơn phần tử trước đó, hoán đổi chúng
        if (i > 0 and arr[i] < arr[i-1]):
            arr[i], arr[i-1] = arr[i-1], arr[i]

        # Nếu phần tử tại vị trí chẵn nhỏ hơn phần tử sau đó, hoán đổi chúng
        if (i < n-1 and arr[i] < arr[i+1]):
            arr[i], arr[i+1] = arr[i+1], arr[i]

# Nhập mảng từ người dùng
arr = list(map(int, input("Nhập các phần tử trong mảng (cách nhau bởi dấu cách): ").split()))
n = len(arr)

# Gọi hàm để sắp xếp mảng theo dạng sóng
sortInWave(arr, n)

# In kết quả mảng sau khi sắp xếp
print("Mảng sau khi sắp xếp theo dạng sóng:")
for i in range(0, n):
    print(arr[i], end=" ")
