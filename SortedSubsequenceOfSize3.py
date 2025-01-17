import sys

def find3Numbers(nums):
    # Nếu số phần tử trong mảng nhỏ hơn 3, không thể tìm bộ ba
    if len(nums) < 3:
        print("No such triplet found")
        return
    
    # Khởi tạo các biến
    seq = 1  # Độ dài của dãy tăng tốt nhất hiện tại
    min_num = nums[0]  # Phần tử nhỏ nhất tính đến thời điểm hiện tại
    max_seq = -sys.maxsize - 1  # Phần tử lớn nhất của dãy tốt nhất
    store_min = min_num  # Lưu giá trị nhỏ nhất của bộ ba

    # Duyệt qua các phần tử trong mảng
    for i in range(1, len(nums)):
        if nums[i] == min_num:
            # Nếu phần tử hiện tại bằng giá trị nhỏ nhất, bỏ qua
            continue
        elif nums[i] < min_num:
            # Nếu phần tử hiện tại nhỏ hơn giá trị nhỏ nhất, cập nhật
            min_num = nums[i]
            continue
        elif nums[i] < max_seq:
            # Nếu tìm thấy phần tử lớn hơn min_num nhưng nhỏ hơn max_seq
            max_seq = nums[i]
            store_min = min_num  # Cập nhật giá trị nhỏ nhất cho dãy
        elif nums[i] > max_seq:
            # Nếu tìm thấy phần tử lớn hơn max_seq
            if seq == 1:
                store_min = min_num  # Đặt lại min_num cho dãy mới
            seq += 1  # Tăng độ dài dãy
            if seq == 3:
                # Nếu độ dài dãy đạt 3, in kết quả và kết thúc
                print(f"Triplet: {store_min}, {max_seq}, {nums[i]}")
                return
            max_seq = nums[i]
    
    # Nếu không tìm thấy bộ ba nào
    print("No such triplet found")

if __name__ == '__main__':
    # Nhập mảng từ người dùng
    nums = list(map(int, input("Enter the array elements separated by spaces: ").split()))
    
    # Gọi hàm tìm bộ ba
    find3Numbers(nums)
