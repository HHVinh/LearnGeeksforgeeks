class Solution:
    @staticmethod
    def missingNumber(arr,n):
        # Tổng các số từ 1 đến n
        totalSum = n * (n+1)//2

        #Tổng các số hiện tại
        currentSum = sum(arr)

        # Số còn thiếu là hiệu của 2 tổng
        if totalSum == currentSum:
            return "Không có số bị thiếu"
        else:
            # Tìm số bị thiếu
            missing_Number = totalSum - currentSum
            return missing_Number
    
array = list(map(int,input("Nhập số nguyên cách nhau bởi khoảng trắng: ").split()))
n = len(array)+1
result = Solution.missingNumber(array,n)
print(f"Số bị thiếu là: {result}")
