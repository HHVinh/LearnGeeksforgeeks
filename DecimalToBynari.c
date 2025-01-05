#include <stdio.h>
void chuyenDoiNhiPhan(int n) {
    int binary[32]; // Mảng lưu các bit nhị phân (giới hạn cho số 32-bit)
    int index = 0;  // Chỉ số hiện tại trong mảng
    // Trường hợp đặc biệt: n = 0
    if (n == 0) {
        printf("Dạng nhị phân: 0\n");
        return;
    }
    // Lặp chia n cho 2 và lưu phần dư vào mảng
    while (n > 0) {
        binary[index++] = n % 2; // Lưu phần dư (bit)
        n /= 2;                  // Cập nhật n
    }
    // In kết quả ngược (vì bit lưu từ thấp đến cao)
    printf("Dạng nhị phân: ");
    for (int i = index - 1; i >= 0; i--) {
        printf("%d", binary[i]);
    }
    printf("\n");
}
int main() {
    int n;
    printf("Nhập số nguyên thập phân: ");
    scanf("%d", &n);
    chuyenDoiNhiPhan(n);
    return 0;
}
