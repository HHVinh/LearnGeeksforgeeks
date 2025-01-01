#include <stdio.h>

double sumOfGP(double a, double r, int n) {
    double sum = 0;
    if(n == 1) {
        sum = a;  // Nếu n = 1, tổng chỉ là phần tử đầu tiên
    } else {
        for(int i = 0; i < n; i++) {
            sum += a;
            a *= r;  // Nhân hệ số r để tính phần tử tiếp theo
        }
    }
    return sum;
}

void mangCapSoNhan(double a, double r, int n, double arr[]) {
    for(int i = 0; i < n; i++) {
        arr[i] = a;  // Gán giá trị cho mảng
        a *= r;  // Nhân hệ số r để tính phần tử tiếp theo
    }
    for(int i = 0; i < n; i++) {
        printf("%.1f ", arr[i]);  // In từng phần tử của mảng
    }
}

int main() {
    double a, r;
    int n;
    printf("Hãy nhập hệ số a bất kì: ");
    scanf("%lf", &a);  // %lf cho double
    printf("Hãy nhập hệ số r bất kì: ");
    scanf("%lf", &r);  // %lf cho double
    printf("Hãy nhập số phần tử n bất kì: ");
    scanf("%d", &n);  // %d cho int

    printf("Mảng cấp số nhân là: ");
    double arr[n];
    mangCapSoNhan(a, r, n, arr);

    double result = sumOfGP(a, r, n);
    printf("\nTổng của cấp số nhân là: %.1lf", result);

    return 0;
}
