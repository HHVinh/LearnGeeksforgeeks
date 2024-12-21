class Solution:
    def getSecondLargest(self, arr):

        # Loại bỏ phần tử trùng nhau
        uniqueNumbers = list(set(arr))

        # Kiểm tra từ 2 phần tử trở lên
        if(len(uniqueNumbers) < 2):
            return -1

        # Sắp xếp giảm dần
        uniqueNumbers.sort(reverse=True)
        # Sắp xếp tăng dần uniqueNumbers.sort()

        return uniqueNumbers[1]

array = list(map(int, input("Nhập danh sách các số cách nhau bởi khoảng trắng: ").split()))
result = Solution().getSecondLargest(array)
print(f"Số lớn thứ 2 trong danh sách là: {result}")
