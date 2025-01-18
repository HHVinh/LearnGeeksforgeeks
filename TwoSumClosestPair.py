def closest_to_zero(arr):
    arr.sort() # Sắp xếp mảng theo thứ tự tăng dần
    i, j = 0, len(arr) - 1  # Khởi tạo chỉ số i (đầu mảng) và j (cuối mảng)
    # Khởi tạo tổng bằng tổng của phần tử đầu và phần tử cuối
    sum_val = arr[i] + arr[j]
    # Khởi tạo biến diff bằng giá trị tuyệt đối của tổng ban đầu
    diff = abs(sum_val)
    while i < j:  # Lặp qua mảng cho đến khi i gặp j
        # Nếu tổng của hai phần tử bằng 0, trả về 0 vì không có cặp nào tốt hơn
        if arr[i] + arr[j] == 0:
            return 0
        # Nếu tổng của cặp phần tử có giá trị tuyệt đối nhỏ hơn giá trị hiện tại
        # thì cập nhật lại kết quả
        if abs(arr[i] + arr[j]) < abs(diff):
            diff = arr[i] + arr[j]
            sum_val = arr[i] + arr[j]
        # Nếu có nhiều cặp có tổng tuyệt đối giống nhau, chọn cặp có tổng lớn hơn
        elif abs(arr[i] + arr[j]) == abs(diff):
            sum_val = max(sum_val, arr[i] + arr[j])
        # Nếu tổng lớn hơn 0, giảm chỉ số j để tìm tổng nhỏ hơn
        if arr[i] + arr[j] > 0:
            j -= 1
        # Nếu tổng nhỏ hơn 0, tăng chỉ số i để tìm tổng lớn hơn
        else:
            i += 1
    return sum_val  # Trả về tổng gần 0 nhất

arr = list(map(int, input("Nhập các số trong mảng, cách nhau bởi khoảng trắng: ").split()))
print(closest_to_zero(arr))  # In kết quả
