def findPair(arr, size, n):
    mpp = {} # Tạo một từ điển mpp để lưu trữ số lần xuất hiện của mỗi phần tử
    # Duyệt qua mảng để kiểm tra các phần tử trùng lặp khi n == 0
    for i in range(size):
        # Nếu phần tử arr[i] đã có trong mpp
        if arr[i] in mpp:
            mpp[arr[i]] += 1
            # Nếu n == 0 và phần tử xuất hiện nhiều hơn 1 lần, ta tìm thấy cặp
            if n == 0 and mpp[arr[i]] > 1:
                print("Cặp tìm thấy: (" + str(arr[i]) + ", " + str(arr[i]) + ")")
                return True
        else:
            mpp[arr[i]] = 1  # Nếu phần tử chưa có trong mpp, thêm nó vào
    # Nếu không có cặp trùng lặp và n == 0, trả về False
    if n == 0:
        return False
    # Duyệt lại mảng lần nữa để tìm cặp có hiệu là n
    for i in range(size):
        # Kiểm tra nếu phần tử arr[i] + n có trong mpp
        if n + arr[i] in mpp:
            print("Cặp tìm thấy: (" + str(arr[i]) + ", " + str(n + arr[i]) + ")")
            return True
    print("Không tìm thấy cặp nào")  # Nếu không tìm thấy cặp nào, in ra thông báo
    return False
arr = [1, 8, 30, 40, 100]  # Mảng đầu vào
size = len(arr)  # Tính độ dài mảng
n = -60  # Giá trị hiệu cần tìm
findPair(arr, size, n)


