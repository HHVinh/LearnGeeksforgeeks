def max_product(arr):
    n = len(arr)
    # max product ending at the current index (tích lớn nhất kết thúc tại chỉ số hiện tại)
    currMax = arr[0]
    # min product ending at the current index (tích nhỏ nhất kết thúc tại chỉ số hiện tại)
    currMin = arr[0]
    # Initialize overall max product (khởi tạo giá trị tích con lớn nhất)
    maxProd = arr[0]
    # Duyệt qua từng phần tử trong mảng từ chỉ số 1 trở đi
    for i in range(1, n):
        # Tính toán tạm thời giá trị max product tại chỉ số i
        # Lựa chọn giá trị lớn nhất giữa ba khả năng:
        # 1. arr[i]: Bắt đầu mảng con mới từ chỉ số i
        # 2. arr[i] * currMax: Mở rộng mảng con có tích lớn nhất từ trước đó
        # 3. arr[i] * currMin: Mở rộng mảng con có tích nhỏ nhất từ trước đó (có thể đảo dấu)
        temp = max(arr[i], arr[i] * currMax, arr[i] * currMin)
        # Cập nhật tích con nhỏ nhất kết thúc tại chỉ số i
        currMin = min(arr[i], arr[i] * currMax, arr[i] * currMin)
        # Cập nhật tích con lớn nhất kết thúc tại chỉ số i
        currMax = temp
        # Cập nhật tích con lớn nhất toàn bộ mảng
        maxProd = max(maxProd, currMax)
    return maxProd
def main():
    arr = list(map(int, input("Nhập các phần tử của mảng (cách nhau bằng dấu cách): ").split()))
    result = max_product(arr)
    print(f"Tích con lớn nhất của mảng là: {result}")
if __name__ == "__main__":
    main()
