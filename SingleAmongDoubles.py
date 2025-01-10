def findUniqueNumber(nums):

    unique = 0
    for num in nums:
        unique ^= num  # Dùng toán tử XOR để tìm số duy nhất
    return unique


if __name__ == "__main__":

    nums = list(map(int, input("Nhập dãy số cách nhau bởi khoảng trắng: ").split()))
    print(f"Số xuất hiện duy nhất là: {findUniqueNumber(nums)}")
