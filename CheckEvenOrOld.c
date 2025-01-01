#include <stdio.h>

// Hàm kiểm tra số chẵn
int isEven(int n) {
    return n % 2 == 0; // Trả về 1 nếu n chẵn, 0 nếu n lẻ
}

int main() {
    int n;
    printf("Hãy nhập số tự nhiên bất kỳ: ");
    scanf("%d", &n);

    // Gọi hàm isEven để kiểm tra chẵn/lẻ
    if (isEven(n)) {
        printf("True\n");
    } else {
        printf("False\n");
    }

    return 0;
}
