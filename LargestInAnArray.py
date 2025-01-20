# Hàm đệ quy tìm giá trị lớn nhất trong danh sách từ vị trí i
def findMax(arr, i):
    # Nếu đã đến phần tử cuối cùng, trả về phần tử đó
    if i == len(arr) - 1:
        return arr[i]

    # Gọi đệ quy để tìm giá trị lớn nhất trong phần còn lại của danh sách
    recMax = findMax(arr, i + 1)

    # So sánh giá trị lớn nhất từ đệ quy với phần tử tại vị trí i
    return max(recMax, arr[i])

# Hàm tìm phần tử lớn nhất trong danh sách
def largest(arr):
    return findMax(arr, 0)  # Gọi hàm findMax bắt đầu từ vị trí 0

if __name__ == '__main__':
    # Yêu cầu người dùng nhập số lượng phần tử của danh sách
    n = int(input("Nhập số lượng phần tử của danh sách: "))

    # Yêu cầu người dùng nhập từng phần tử của danh sách
    arr = []
    for i in range(n):
        num = int(input(f"Nhập phần tử thứ {i + 1}: "))
        arr.append(num)

    # Tìm và in ra phần tử lớn nhất
    print("Phần tử lớn nhất trong danh sách là:", largest(arr))
