import heapq
def kLonNhat(arr, k):
    #Tìm k phần tử lớn nhất trong một danh sách arr.
  
    # Tạo một min-heap với k phần tử đầu tiên
    minH = arr[:k]
    heapq.heapify(minH)
    # Duyệt qua phần còn lại của danh sách
    for x in arr[k:]:
        # Nếu phần tử hiện tại lớn hơn giá trị nhỏ nhất trong heap
        if x > minH[0]:
            # Thay phần tử nhỏ nhất bằng phần tử mới
            heapq.heapreplace(minH, x)
    res = []
    # Min-heap lúc này chỉ chứa k phần tử lớn nhất
    while minH:
        # Lấy từng phần tử ra khỏi heap và thêm vào danh sách kết quả
        res.append(heapq.heappop(minH))
    # Đảo ngược danh sách để sắp xếp các phần tử theo thứ tự giảm dần
    res.reverse()
    return res
# Yêu cầu người dùng nhập danh sách và số lượng k
arr = list(map(int, input("Nhập danh sách các số, cách nhau bởi khoảng trắng: ").split()))
k = int(input("Nhập số lượng k phần tử lớn nhất cần tìm: "))
# Gọi hàm và in kết quả
ketQua = kLonNhat(arr, k)
print("Danh sách", k, "phần tử lớn nhất theo thứ tự giảm dần là:", ketQua)
