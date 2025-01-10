def findDistinct(arr):
    # Sử dụng set để tự động loại bỏ các phần tử trùng lặp
    return list(set(arr))

if __name__ == "__main__":
    
    arr = list(map(int, input("Nhập một dãy số cách nhau bởi dấu cách: ").split()))

    # Gọi hàm findDistinct để tìm các phần tử duy nhất
    distinct_elements = findDistinct(arr)
    
    # In ra kết quả
    print("Các phần tử duy nhất là:")
    for ele in distinct_elements:
        print(ele, end=" ")
