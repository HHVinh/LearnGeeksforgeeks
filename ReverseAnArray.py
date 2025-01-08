def reverseArray(arr):
    # Sử dụng slicing để đảo ngược mảng
    # arr[::-1] trả về một mảng mới với các phần tử đảo ngược
    return arr[::-1]

# Hàm đảo ngược mảng thủ công (Cách sử dụng vòng lặp)
def reverseArrayManual(arr):
    # Sử dụng hai con trỏ: 'left' bắt đầu từ đầu mảng,
    # 'right' bắt đầu từ cuối mảng
    left, right = 0, len(arr) - 1
    while left < right:
        # Hoán đổi hai phần tử ở vị trí 'left' và 'right'
        arr[left], arr[right] = arr[right], arr[left]
        # Di chuyển con trỏ vào giữa
        left += 1
        right -= 1
    # Trả về mảng đã được đảo ngược
    return arr

# Yêu cầu người dùng nhập mảng
# Tách chuỗi thành danh sách số nguyên
input_str = input("Nhập các phần tử của mảng, cách nhau bởi dấu cách: ")
arr = list(map(int, input_str.split()))

# Gọi hàm reverseArray và reverseArrayManual, đồng thời in kết quả
print("Mảng sau khi đảo ngược (slicing):", reverseArray(arr))
print("Mảng sau khi đảo ngược thủ công:", reverseArrayManual(arr))
