def checkDuplicatesWithinK(arr, n, k):
    # Tạo một set (tập hợp) rỗng để lưu các phần tử đã xuất hiện trong mảng
    myset = set()
    for i in range(n):
        # Kiểm tra xem phần tử hiện tại đã xuất hiện trong tập hợp myset chưa
        if arr[i] in myset:
            # Nếu có, nghĩa là phần tử đã xuất hiện trong phạm vi k chỉ số
            return True        
        # Thêm phần tử hiện tại vào set
        myset.add(arr[i])
        # Nếu chỉ số hiện tại >= k, xóa phần tử nằm ngoài phạm vi k từ tập hợp
        if i >= k:
            myset.remove(arr[i - k])
    # Nếu không tìm thấy phần tử trùng lặp trong phạm vi k, trả về False
    return False

if __name__ == "__main__":
    arr = list(map(int, input("Nhập mảng các phần tử (cách nhau bởi dấu cách): ").split()))
    
    k = int(input("Nhập giá trị k (khoảng cách tối đa): "))
    n = len(arr)
    # Kiểm tra xem có phần tử trùng lặp trong khoảng cách k chỉ số không
    if checkDuplicatesWithinK(arr, n, k):
        print("True")
    else:
        print("False")

