def firstRepeatingElement(arr):
    seen = set()  # Sử dụng set để lưu các phần tử đã gặp

    for num in arr:
        if num in seen:  # Nếu phần tử đã gặp trước đó, trả về phần tử đó
            return num
        seen.add(num)  # Thêm phần tử vào set

    return -1  # Nếu không có phần tử lặp lại nào

if __name__ == "__main__":
    arr = list(map(int, input("Nhập các phần tử của mảng cách nhau bởi dấu cách: ").split()))
    result = firstRepeatingElement(arr)
    if result == -1:
        print("Không có phần tử nào lặp lại!")
    else:
        print(f"Phần tử lặp lại đầu tiên là: {result}")
