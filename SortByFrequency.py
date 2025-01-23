from collections import Counter  # Import Counter để đếm tần suất của các phần tử trong mảng

def sort_by_frequency(arr):
    # Đếm tần suất xuất hiện của các phần tử trong mảng và lưu vào frequency
    # frequency là một dictionary với key là phần tử trong mảng và value là tần suất
    frequency = Counter(arr)
    
    # Sử dụng hàm sorted() để sắp xếp mảng
    # Key sắp xếp:
    # -frequency[x]: Sắp xếp theo tần suất giảm dần
    # arr.index(x): Đảm bảo nếu tần suất bằng nhau, phần tử nào xuất hiện trước trong mảng gốc sẽ giữ vị trí trước
    result = sorted(arr, key=lambda x: (-frequency[x], arr.index(x)))
    
    # Trả về mảng đã được sắp xếp
    return result

# Ví dụ sử dụng hàm
arr1 = [2, 5, 2, 8, 5, 6, 8, 8]  # Mảng đầu vào thứ nhất
arr2 = [2, 5, 2, 6, -1, 9999999, 5, 8, 8, 8]  # Mảng đầu vào thứ hai

# Gọi hàm và in ra kết quả
print(sort_by_frequency(arr1))  # Output: [8, 8, 8, 2, 2, 5, 5, 6]
print(sort_by_frequency(arr2))  # Output: [8, 8, 8, 2, 2, 5, 5, 6, -1, 9999999]
