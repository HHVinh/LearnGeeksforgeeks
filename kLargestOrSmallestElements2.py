import heapq

def kLonNhat(arr, k):
    """
    Tìm k phần tử lớn nhất trong danh sách arr bằng hàm nlargest.
    
    Tham số:
    - arr: Danh sách các số.
    - k: Số lượng phần tử lớn nhất cần tìm.
    
    Trả về:
    - Danh sách chứa k phần tử lớn nhất, sắp xếp theo thứ tự giảm dần.
    """
    return heapq.nlargest(k, arr)

# Yêu cầu người dùng nhập danh sách và số lượng k
arr = list(map(int, input("Nhập danh sách các số, cách nhau bởi khoảng trắng: ").split()))
k = int(input("Nhập số lượng k phần tử lớn nhất cần tìm: "))

# Gọi hàm và in kết quả
ketQua = kLonNhat(arr, k)
print(f"Danh sách {k} phần tử lớn nhất theo thứ tự giảm dần là:", ketQua)
