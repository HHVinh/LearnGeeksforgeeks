def largest(arr, n):
    mx = arr[0]  # Khởi tạo giá trị lớn nhất ban đầu bằng phần tử đầu tiên của mảng

    # Duyệt qua các phần tử trong mảng từ phần tử thứ hai trở đi
    for i in range(1, n):  # Bắt đầu từ i = 1 (phần tử thứ 2 trong mảng)
        if arr[i] > mx:  # Nếu phần tử hiện tại lớn hơn giá trị lớn nhất hiện tại
            mx = arr[i]  # Cập nhật giá trị lớn nhất

    return mx  # Trả về giá trị lớn nhất sau khi duyệt hết mảng

if __name__ == '__main__':
    n = int(input("Nhập số lượng phần tử trong mảng: "))  # Nhập số lượng phần tử
    arr = []  # Khởi tạo một danh sách rỗng

    # Nhập các phần tử của mảng
    for i in range(n):
        num = int(input(f"Nhập phần tử thứ {i + 1}: "))
        arr.append(num)

    ans = largest(arr, n)  # Gọi hàm largest để tìm giá trị lớn nhất trong mảng

    print("Giá trị lớn nhất trong mảng là:", ans)  # In kết quả ra màn hình
