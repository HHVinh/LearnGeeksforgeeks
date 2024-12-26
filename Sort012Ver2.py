class Solution:
    def sort012(self, arr):
        n = len(arr)
        l0 = 0
        hight = n-1
        mid = 0

        while mid <= hight:
            if arr[mid] == 0:
                arr[l0], arr[mid] = arr[mid], arr[l0]
                l0 = l0 + 1
                mid = mid + 1
            elif arr[mid] == 1:
                mid = mid +1
            else:
                arr[mid], arr[hight] = arr[hight], arr[mid]
                hight = hight - 1
        return arr

arr = list(map(int, input("Hãy nhập các giá trị 0 1 2 bất kì cách nhau bởi khoảng trắng: ").split()))
solution = Solution()
result = solution.sort012(arr)
print(f"Kết quả là: {result}")