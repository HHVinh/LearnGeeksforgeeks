#include <stdio.h>
int nthFibonacci(int n) {
    if (n < 0) return -1; // Trả về lỗi nếu n không hợp lệ (n phải >= 0)
    if (n == 1 || n == 0) return n;

    int previous = 0, current = 1; // Đặt giá trị Fibonacci ban đầu
    for (int i = 2; i <= n; i++) {
        int next = previous + current; // Tính Fibonacci tiếp theo
        previous = current;            // Cập nhật giá trị trước đó
        current = next;                // Cập nhật giá trị hiện tại
    }
    return current;  // Trả về Fibonacci thứ n
}
int main() {
    int n;
    printf("Nhập chỉ số n: ");
    scanf("%d", &n);
    int result = nthFibonacci(n);
    if (result == -1) {
        printf("Chỉ số n không hợp lệ. Vui lòng nhập n >= 0.\n");
    } else {
        printf("Fibonacci thứ %d là: %d\n", n, result);
    }

    return 0;
}
