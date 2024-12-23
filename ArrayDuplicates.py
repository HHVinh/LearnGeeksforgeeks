class Solution:
    def findDuplicates(self, arr):
        seen = set()      # Theo dõi các phần tử đã gặp
        duplicates = set()  # Lưu các phần tử trùng lặp

        for num in arr:
            if num in seen:
                duplicates.add(num)
            else:
                seen.add(num)

        return sorted(duplicates)  # Sắp xếp kết quả trước khi trả về

# Nhập mảng từ người dùng
arr = list(map(int, input("Nhập các số nguyên cách nhau bởi khoảng trắng: ").split()))

# Tạo đối tượng Solution và gọi phương thức
solution = Solution()
result = solution.findDuplicates(arr)

# In kết quả
print(f"Kết quả là: {result}")
