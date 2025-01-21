from bisect import bisect_left

# Yêu cầu nhập mảng đã sắp xếp và giá trị x cần tìm phần tử ceil
arr = list(map(int, input("Nhập mảng đã sắp xếp, các phần tử cách nhau bởi khoảng trắng: ").split()))
x = int(input("Nhập giá trị x: "))

# Lấy độ dài của mảng
n = len(arr)

# Dùng bisect_left để tìm chỉ số của phần tử ceil (phần tử nhỏ nhất >= x)
idx = bisect_left(arr, x)

# Kiểm tra nếu chỉ số idx hợp lệ (nếu idx == n thì không có phần tử ceil)
if idx == n:
    print("Không có phần tử ceil cho", x)
else:
    print(f"Phần tử ceil của {x} là {arr[idx]}")
