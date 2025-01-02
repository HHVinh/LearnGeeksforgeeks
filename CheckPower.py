import math

def checkPower(x,y):
    if x == 0: return (y == 0)
    if y == 1: return True
    if x == -1: return (y == 1 or y == -1)
    if x > 0 and y < 0: return False
    if x < 0:
        sum = 1
        while (y < 0 and abs(sum) < abs(y)) or (y > 0 and sum < y):
            sum *= x
            if sum == y:
                return True
        return False
    power = 1
    while power < y:
        power *= x
    return (power == y)

x,y = map(int, input("Hãy nhập 2 số x, y bất kì: ").split())
if checkPower(x,y):
    print("True")
else: print("False")