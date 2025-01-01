def arithmeticProgression(arr, n):
    arr2 = sorted(set(arr)) 
    
    # Nếu độ dài của mảng ban đầu khác với độ dài mảng sau thì không phải cấp số cộng
    if len(arr) != len(arr2):
        return 0
    else:
        maxNum = arr[-1]
        minNum = arr[0]
        # Tính công sai d của cấp số cộng
        d = (maxNum - minNum) // (n - 1)

    for i in range(n):
        if minNum + i * d not in arr:
            return 0
    return 1

arr = list(map(int, input("Hãy nhập các số bất kì cách nhau bởi khoảng trắng: ").split()))
n = len(arr)
if n < 2:
    print("No")  # Nếu mảng rỗng, in "No"
else:
    if(arithmeticProgression(arr, n)):
        print("Yes")  # Nếu có, in "Yes"
    else:
        print("No")  # Nếu không, in "No"
