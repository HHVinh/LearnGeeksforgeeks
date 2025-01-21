def findMaximum(arr): # Hàm tìm điểm bitonic (giá trị lớn nhất) trong mảng
    n = len(arr)
    # Kiểm tra nếu mảng chỉ có 1 phần tử hoặc phần tử đầu tiên lớn hơn phần tử tiếp theo
    if n == 1 or arr[0] > arr[1]:
        return arr[0]
    # Kiểm tra nếu phần tử cuối cùng lớn hơn phần tử trước nó
    if arr[n - 1] > arr[n - 2]:
        return arr[n - 1]
    # Khởi tạo khoảng tìm kiếm cho thuật toán tìm kiếm nhị phân
    lo, hi = 1, n - 2
    while lo <= hi:
        # Tính chỉ số giữa (mid)
        mid = lo + (hi - lo) // 2
        # Nếu phần tử tại vị trí mid là giá trị lớn nhất, trả về giá trị này
        if arr[mid] > arr[mid - 1] and arr[mid] > arr[mid + 1]:
            return arr[mid]
        # Nếu phần tử tiếp theo lớn hơn, điểm bitonic sẽ nằm ở nửa phải
        if arr[mid] < arr[mid + 1]:
            lo = mid + 1
        # Nếu phần tử trước đó lớn hơn, điểm bitonic sẽ nằm ở nửa trái
        else:
            hi = mid - 1
    return arr[hi]
if __name__ == "__main__":
    # Nhập mảng từ người dùng
    arr = list(map(int, input("Nhập mảng các phần tử (các phần tử cách nhau bằng dấu cách): ").split()))
    # Tìm và in ra điểm bitonic
    print(f"Điểm bitonic trong mảng là: {findMaximum(arr)}")
