class Solution:
    def isParenthesisBalanced(self, s):
        c1 = 0
        c2 = 0
        c3 = 0
        for char in s:
            if char == '{': c1 += 1
            elif char == '}': c1 -= 1
            elif char == '[': c2 += 1
            elif char == ']': c2 -= 1
            elif char == '(': c3 += 1
            elif char == ')': c3 -= 1
        if c1 != 0 or c2 != 0 or c3 != 0:
            return False
        else:
            return True
        
s = input("Hãy nhập các dấu '{' '}' '[' ']' '(' ')' bất kì: ").split()

solution = Solution()

result = solution.isParenthesisBalanced(s)

print(result)