class Solution:
    def sort012(self, arr):
        count0 = 0; count1 = 0; count2 = 0

        # Đếm số lần xuất hiện của 0, 1 và 2
        for num in arr:
            if num == 0:
                count0 += 1
            elif num == 1:
                count1 += 1
            else:
                count2 += 1

        # Ghi đè mảng với số lượng 0, 1, 2 tương ứng
        ind = 0
        for i in range(count0):
            arr[ind] = 0
            ind += 1

        for i in range(count1):
            arr[ind] = 1
            ind += 1

        for i in range(count2):
            arr[ind] = 2
            ind += 1

        # Trả về mảng sau khi sắp xếp
        return arr

arr = list(map(int, input("Hãy nhập các giá trị 0 1 2 bất kì cách nhau bởi khoảng trắng: ").split()))
solution = Solution()
result = solution.sort012(arr)
print(f"Kết quả là: {result}")