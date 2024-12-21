class Solution:
    def getSecondLargest(self, arr):

        n = len(arr)
        if n < 2:
            return -1
        
        maxNum = secondLargest = float('-inf') # float('-inf') là âm vô cùng
        for i in arr:
            if i > maxNum:
                secondLargest = maxNum
                maxNum = i
            elif i > secondLargest and i != maxNum:
                secondLargest = i
        if secondLargest == float('-inf'):
            return -1
        else:
            return secondLargest
        

array = list(map(int, input("Nhập danh sách các số cách nhau bởi khoảng trắng: ").split()))
result = Solution().getSecondLargest(array)
print(f"Số lớn thứ 2 trong danh sách là: {result}")
