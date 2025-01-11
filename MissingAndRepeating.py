def print_two_elements(arr): #Sử dụng công thức tổng và tổng bình phương để xác định số thiếu và số lặp.

    n = len(arr)  # Độ dài mảng (cũng là số phần tử từ 1 đến n)
    
    # Tính tổng lý thuyết và tổng bình phương lý thuyết
    s = (n * (n + 1)) // 2            # Tổng lý thuyết của các số từ 1 đến n
    ssq = (n * (n + 1) * (2 * n + 1)) // 6  # Tổng bình phương lý thuyết của các số từ 1 đến n

    # Khởi tạo giá trị ban đầu cho số thiếu và số lặp
    missing = 0
    repeating = 0

    # Tính tổng thực tế và tổng bình phương thực tế của mảng
    for i in range(n):
        s -= arr[i]                 # Giảm dần tổng bằng từng phần tử thực tế
        ssq -= arr[i] * arr[i]      # Giảm dần tổng bình phương

    # Từ hai phương trình:
    # missing - repeating = s
    # missing^2 - repeating^2 = ssq
    # Suy ra:
    missing = (s + ssq // s) // 2   # Tính số thiếu
    repeating = missing - s         # Tính số lặp

    # In kết quả
    print("Repeating:", repeating)
    print("Missing:", missing)


# Yêu cầu nhập dữ liệu từ người dùng
try: 
    arr = list(map(int, input("Nhập các phần tử của mảng, cách nhau bởi khoảng trắng: ").strip().split()))
    print_two_elements(arr)  # Gọi hàm xử lý
except Exception as e:
    print("Lỗi nhập liệu:", e)
