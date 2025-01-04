#include <stdio.h>
int UCLN(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
void addTwoFraction(int tu1, int mau1, int tu2, int mau2) {
    int tuTong = tu1 * mau2 + tu2 * mau1;
    int mauTong = mau1 * mau2;
    // Tìm UCLN để rút gọn phân số
    int ucln = UCLN(tuTong, mauTong);
    // Rút gọn phân số
    tuTong /= ucln;
    mauTong /= ucln;
    printf("\nKết quả cộng 2 phân số là: %d/%d", tuTong, mauTong);
}
int main() {
    int tu1, mau1, tu2, mau2;
    printf("Nhập tử số 1: ");
    scanf("%d", &tu1);
    printf("Nhập mẫu số 1: ");
    scanf("%d", &mau1);
    if (mau1 == 0) {
        printf("\nMẫu số phải khác 0");
        return 1;
    }
    printf("Nhập tử số 2: ");
    scanf("%d", &tu2);
    printf("Nhập mẫu số 2: ");
    scanf("%d", &mau2);
    if (mau2 == 0) {
        printf("\nMẫu số phải khác 0");
        return 1;
    }
    printf("\nPhân số 1 là %d/%d - Phân số 2 là %d/%d", tu1, mau1, tu2, mau2);
    addTwoFraction(tu1, mau1, tu2, mau2);
    return 0;
}
