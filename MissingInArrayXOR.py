def missingNumber(arr):
    n = len(arr) + 1  # Tổng số phần tử trong dãy (bao gồm cả số bị thiếu)
    xor1 = 0  # Biến để lưu XOR của các số từ 1 đến n
    xor2 = 0  # Biến để lưu XOR của tất cả các phần tử trong mảng

    # XOR tất cả các phần tử trong mảng
    for num in arr:
        xor2 ^= num

    # XOR tất cả các số từ 1 đến n
    for i in range(1, n + 1):
        xor1 ^= i

    # Số bị thiếu là XOR của xor1 và xor2
    return xor1 ^ xor2

print("Chương trình tìm số bị thiếu trong dãy 1 đến n.")
n = int(input("Nhập tổng số phần tử dãy (bao gồm cả số bị thiếu): "))

print(f"Nhập {n-1} số (cách nhau bằng khoảng trắng): ")
arr = list(map(int, input().split()))

result = missingNumber(arr)
print(f"Số bị thiếu trong dãy là: {result}")

