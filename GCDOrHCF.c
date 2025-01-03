#include <stdio.h>

// Hàm tính GCD/HCF của hai số a và b
int GCDOrHCF(int a, int b) {
    // Áp dụng thuật toán Euclid
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int a, b;
    printf("Nhập a và b: ");
    scanf("%d %d", &a, &b);

    // Gọi hàm tính GCD/HCF và in kết quả
    int res = GCDOrHCF(a, b);
    printf("UCLN của %d và %d là: %d\n", a, b, res);

    return 0;
}
