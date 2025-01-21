def floorSearch(arr, low, high, x):
    # Kiểm tra nếu low vượt quá high, tức là không còn phần tử nào để kiểm tra
    if (low > high):
        return -1
    # Nếu phần tử cuối cùng trong mảng nhỏ hơn hoặc bằng x, trả về phần tử cuối cùng
    if (x >= arr[high]):
        return high
    # Tìm điểm giữa mảng
    mid = int((low + high) / 2)
    # Nếu phần tử tại điểm giữa bằng x, thì chính là floor
    if (arr[mid] == x):
        return mid
    # Nếu x nằm giữa arr[mid-1] và arr[mid], thì floor là arr[mid-1]
    if (mid > 0 and arr[mid-1] <= x and x < arr[mid]):
        return mid - 1
    # Nếu x nhỏ hơn arr[mid], thì floor chắc chắn nằm ở nửa bên trái
    if (x < arr[mid]):
        return floorSearch(arr, low, mid-1, x)
    # Nếu x lớn hơn arr[mid], tìm kiếm ở nửa bên phải
    return floorSearch(arr, mid + 1, high, x)
if __name__ == "__main__":
    arr = list(map(int, input("Nhập các phần tử trong mảng đã sắp xếp, cách nhau bằng dấu cách: ").split()))
    x = int(input("Nhập giá trị x để tìm phần tử floor: "))
    n = len(arr)
    index = floorSearch(arr, 0, n-1, x)
    if (index == -1):
        print("Floor của", x, "không tồn tại trong mảng.")
    else:
        print("Floor của", x, "là", arr[index])

