class Solution:
    def leaders(self, arr):
        n = len(arr)
        ans = []
        for i in range(n):
            for j in range(i + 1, n):
                if arr[i] < arr[j]:
                    break
            else:
                ans.append(arr[i])
        return ans

solution = Solution()

arr = list(map(int, input("Nhập các giá trị cách nhau bởi khoảng trắng: ").split()))
result = solution.leaders(arr)
print(f"Kết quả là: {result}")