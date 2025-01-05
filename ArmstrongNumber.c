#include <stdio.h>
#include <math.h>
int armstrong(int n) {
    int num_digits = 0;
    int temp = n;
    while (temp != 0) {
        num_digits++;
        temp /= 10;
    }
    int sum_of_powers = 0;
    temp = n;
    while (temp != 0) {
        int digit = temp % 10;  // Lấy chữ số cuối
        sum_of_powers += pow(digit, num_digits);  // Lũy thừa chữ số
        temp /= 10;  // Loại bỏ chữ số cuối
    }
    return sum_of_powers == n;  // Nếu bằng nhau, n là số Armstrong
}
int main() {
    int n;
    printf("Nhập số để kiểm tra: ");
    scanf("%d", &n);
    if (armstrong(n)) {
        printf("%d là số Armstrong!\n", n);
    } else {
        printf("%d không phải là số Armstrong!\n", n);
    }
    return 0;
}
