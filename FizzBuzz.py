def fizzBuzz(n):
    res = []  # Danh sách lưu kết quả
    dic = {3: "Fizz", 5: "Buzz"}  # Từ điển ánh xạ số chia -> chuỗi
    key = [3, 5]  # Danh sách các số chia cần kiểm tra

    for i in range(1, n + 1):  # Lặp qua từng số từ 1 đến n
        s = ""  # Biến lưu kết quả cho số hiện tại
        for k in key:  # Kiểm tra từng số chia
            if i % k == 0:  # Nếu chia hết
                s += dic[k]  # Thêm chuỗi tương ứng
        if not s:  # Nếu không chia hết cho số nào
            s += str(i)  # Gán số hiện tại
        res.append(s)  # Thêm kết quả vào danh sách
    return res

# Phần nhập `n` từ người dùng
n = int(input("Nhập số n: "))  # Nhập giới hạn trên của bài toán
result = fizzBuzz(n)  # Gọi hàm và lưu kết quả

# Hiển thị kết quả
print("\nKết quả Fizz Buzz:")
print(" ".join(result))  # In kết quả dưới dạng chuỗi cách nhau bằng dấu cách
print("\n")
print(result, end=" ")

# Kết quả của 2 lệnh Print ở trên
# 1 2 Fizz 4 Buzz Fizz 7 8 Fizz Buzz 11 Fizz 13 14 FizzBuzz
# ['1', '2', 'Fizz', '4', 'Buzz', 'Fizz', '7', '8', 'Fizz', 'Buzz', '11', 'Fizz', '13', '14', 'FizzBuzz']