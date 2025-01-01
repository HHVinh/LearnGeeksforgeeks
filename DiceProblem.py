def diceProblem(n):
    return 7 - n

n = int(input("Hãy nhập một số nguyên bất kì từ 1 đến 6: "))
if n < 1 or n > 6:
    print("\nHãy nhập số nguyên từ 1 đến 6!")
else:
    print(f"\nMặt đối diện của {n} là {diceProblem(n)}")