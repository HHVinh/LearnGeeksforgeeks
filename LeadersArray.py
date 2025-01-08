def leaders(arr):
    result = []  # Mảng lưu trữ các phần tử dẫn đầu
    n = len(arr)  # Lấy độ dài của mảng
    # Khởi tạo phần tử cuối cùng của mảng là phần tử dẫn đầu đầu tiên
    maxRight = arr[-1]
    # Phần tử cuối cùng luôn là một phần tử dẫn đầu
    result.append(maxRight)
    # Duyệt mảng từ phải qua trái, bắt đầu từ phần tử thứ hai từ cuối
    for i in range(n - 2, -1, -1):  # Duyệt từ n-2 đến 0
        if arr[i] >= maxRight:  # Nếu phần tử hiện tại lớn hơn hoặc bằng maxRight
            maxRight = arr[i]  # Cập nhật maxRight
            result.append(maxRight)  # Thêm phần tử vào mảng kết quả
    # Đảo ngược mảng kết quả để duy trì thứ tự ban đầu
    result.reverse()
    return result  # Trả về mảng các phần tử dẫn đầu

if __name__ == "__main__":
    # Yêu cầu người dùng nhập mảng
    arr = list(map(int, input("Hãy nhập các phần tử của mảng cách nhau bởi khoảng trắng: ").split()))
    # Tìm các phần tử dẫn đầu
    result = leaders(arr)
    # In kết quả
    print("Các phần tử dẫn đầu là:", " ".join(map(str, result)))
