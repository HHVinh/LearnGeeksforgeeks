class Solution:
    def isParenthesisBalanced(self, s):
        arr = []
        dic = {'}':'{' , ']':'[' , ')':'('}
        for char in s:
            if char in dic.values():
                arr.append(char)
            elif char in dic:
                if not arr or arr[-1] != dic[char]:
                    return False
                arr.pop()
        return not arr


s = input("Hãy nhập các dấu '{' '}' '[' ']' '(' ')' bất kì: ").split()

solution = Solution()

result = solution.isParenthesisBalanced(s)

print(result)