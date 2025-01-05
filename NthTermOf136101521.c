#include <stdio.h>
int nth_term(int n) {
    return n * (n + 1) / 2;  // Tính trực tiếp theo công thức
}
int main() {
    int n;
    printf("Nhập số nguyên dương n: ");
    scanf("%d", &n);
    printf("Nth term trong dãy là: %d\n", nth_term(n));

    return 0;
}
