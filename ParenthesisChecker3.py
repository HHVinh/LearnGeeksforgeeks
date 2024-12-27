class Solution:
    def isParenthesisBalanced(self, s):
        # Đếm số lượng dấu ngoặc mở và đóng cho từng loại
        c1_open = s.count('(')
        c1_close = s.count(')')
        
        c2_open = s.count('{')
        c2_close = s.count('}')
        
        c3_open = s.count('[')
        c3_close = s.count(']')
        
        # Kiểm tra xem số lượng dấu ngoặc mở và đóng có bằng nhau không
        if c1_open == c1_close and c2_open == c2_close and c3_open == c3_close:
            return True
        else:
            return False


s = input("Hãy nhập các dấu '{' '}' '[' ']' '(' ')' bất kì: ").split()

solution = Solution()

result = solution.isParenthesisBalanced(s)

print(result)