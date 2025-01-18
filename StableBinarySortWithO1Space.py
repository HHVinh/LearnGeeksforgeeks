def reverse(arr, l, r):
    if l < r:
        arr[l], arr[r] = arr[r], arr[l]  # Hoán đổi hai phần tử ở vị trí l và r
        reverse(arr, l + 1, r - 1)  # Gọi đệ quy để hoán đổi tiếp các phần tử giữa l và r
        
def merge(arr, l, m, r):
    i = l
    j = m + 1

    while i <= m and arr[i] < 0:  # Duyệt qua mảng từ l đến m để tìm phần tử dương đầu tiên
        i += 1

    while j <= r and arr[j] < 0:  # Duyệt qua mảng từ m+1 đến r để tìm phần tử âm cuối cùng
        j += 1
    j -= 1  # Điều chỉnh j để trỏ tới phần tử âm cuối cùng trong mảng con

    reverse(arr, i, m)  # Đảo ngược phần tử dương trong nửa mảng bên trái
    reverse(arr, m + 1, j)  # Đảo ngược phần tử âm trong nửa mảng bên phải
    reverse(arr, i, j)  # Đảo ngược lại phần từ i đến j để hoàn tất việc phân vùng âm-dương

def rearrange(arr, l, r):
    if l < r:  # Kiểm tra điều kiện dừng đệ quy
        m = l + (r - l) // 2  # Tính chỉ số m (trung điểm của mảng)

        rearrange(arr, l, m)
        rearrange(arr, m + 1, r)
        merge(arr, l, m, r)  # Hợp nhất hai mảng con sau khi phân chia

if __name__ == "__main__":
    # Yêu cầu nhập mảng từ bàn phím
    arr_input = input("Nhập mảng các số, cách nhau bằng dấu cách: ").split()
    
    # Chuyển đổi mảng nhập vào thành kiểu số nguyên
    arr = [int(num) for num in arr_input]
    
    # Gọi hàm rearrange với mảng đầu vào
    rearrange(arr, 0, len(arr) - 1)
    
    # In mảng sau khi phân chia
    print("Mảng sau khi phân chia âm và dương:")
    for ele in arr:
        print(ele, end=' ')  # In mảng sau khi phân chia
