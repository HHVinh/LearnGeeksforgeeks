def maximumProfit(prices):
    n = len(prices)  # Độ dài của danh sách giá
    res = 0          # Biến lưu trữ lợi nhuận tối đa
    i = 0            # Chỉ số duyệt danh sách

    while i < n - 1:
        # Tìm local minima (giá thấp nhất trước khi giá tăng)
        while i < n - 1 and prices[i] >= prices[i + 1]:
            i += 1
        lMin = prices[i]
        # Tìm local maxima (giá cao nhất trước khi giá giảm)
        while i < n - 1 and prices[i] <= prices[i + 1]:
            i += 1
        lMax = prices[i]
        # Tính lợi nhuận từ local minima và maxima
        res += (lMax - lMin)
    return res

if __name__ == "__main__":
    try:
        prices = list(map(int, input("Nhập danh sách giá cổ phiếu (các số cách nhau bởi dấu cách): ").split()))
        if len(prices) < 2:
            print("Vui lòng nhập ít nhất 2 giá để tính lợi nhuận.")
        else:
            max_profit = maximumProfit(prices)
            print(f"Lợi nhuận tối đa có thể đạt được là: {max_profit}")
    except ValueError:
        print("Vui lòng chỉ nhập các số nguyên hợp lệ, cách nhau bởi dấu cách.")