#include <stdio.h>
// Hàm tính LCM
int LCM(int a, int b) {
    int max, min, res;
    // Xác định max và min
    if (a > b) {
        max = a;
        min = b;
    } else {
        max = b;
        min = a;
    }
    // Bắt đầu tìm LCM từ max
    res = max;
    // Duyệt vòng lặp và tìm bội chung nhỏ nhất
    while (res % min != 0) {
        res += max;  // Tiến dần tới bội chung nhỏ nhất
    }
    return res;
}
int main() {
    int a, b;
    printf("Nhập a và b: ");  scanf("%d %d", &a, &b);
    // Gọi hàm tính LCM và in kết quả
    int res = LCM(a, b);
    printf("LCM nhỏ nhất của %d và %d là: %d\n", a, b, res);
    return 0;
}


