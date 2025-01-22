def is_sorted(arr):
    #Trả về 1 nếu mảng tăng dần, -1 nếu mảng giảm dần,0 nếu mảng không được sắp xếp.
    ascending = True
    descending = True
    for i in range(len(arr) - 1):
        if arr[i] > arr[i + 1]:
            ascending = False
        if arr[i] < arr[i + 1]:
            descending = False
    if ascending:
        return 1
    elif descending:
        return -1
    else:
        return 0

arr = list(map(int,input("Nhập các phần tử của mảng: ").split()))

result = is_sorted(arr)
if result == 1:
    print("Mảng được sắp xếp tăng dần.")
elif result == -1:
    print("Mảng được sắp xếp giảm dần.")
else:
    print("Mảng không được sắp xếp tăng hoặc giảm.")
