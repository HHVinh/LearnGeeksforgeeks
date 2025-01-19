def two_sum(arr, target):
    arr.sort()  # Sắp xếp mảng để sử dụng phương pháp hai con trỏ
    left, right = 0, len(arr) - 1

    # Duyệt mảng bằng hai con trỏ
    while left < right:
        current_sum = arr[left] + arr[right]  # Tính tổng của hai phần tử tại con trỏ

        if current_sum == target:  # Nếu tổng bằng target
            return True  # Tìm thấy cặp giá trị phù hợp
        elif current_sum < target:  # Nếu tổng nhỏ hơn target
            left += 1  # Di chuyển con trỏ trái sang phải để tăng tổng
        else:  # Nếu tổng lớn hơn target
            right -= 1  # Di chuyển con trỏ phải sang trái để giảm tổng

    return False

arr = list(map(int, input("Nhập các phần tử của mảng, cách nhau bởi dấu cách: ").split()))

target = int(input("Nhập giá trị cần tìm tổng (target): "))  # Nhập giá trị target

# Gọi hàm two_sum và in kết quả
if two_sum(arr, target):
    print("true")  # Nếu tìm thấy cặp giá trị phù hợp
else:
    print("false")  # Nếu không tìm thấy cặp giá trị nào
