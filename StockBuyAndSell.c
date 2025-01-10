#include <stdio.h>
int maximumProfit(const int* prices, int n) {
    int res = 0; // Biến lưu trữ lợi nhuận tối đa
    // Duyệt qua mảng giá, cộng chênh lệch giữa các giá tăng dần
    for (int i = 1; i < n; i++) {
        if (prices[i] > prices[i - 1]) 
            res += prices[i] - prices[i - 1]; // Cộng lợi nhuận khi giá tăng
    }
    return res; // Trả về lợi nhuận tối đa
}
int main() {
    int n;
    printf("Nhập số lượng giá cổ phiếu: "); scanf("%d", &n);

    if (n < 2) {
        printf("Cần ít nhất 2 giá để tính lợi nhuận.\n");
        return 1; // Thoát chương trình
    }
    int prices[n];
    printf("Nhập giá cổ phiếu (mỗi giá cách nhau bởi khoảng trắng):");

    for (int i = 0; i < n; i++) {
        scanf("%d", &prices[i]);
    }
    int maxProfit = maximumProfit(prices, n);
    printf("Lợi nhuận tối đa có thể đạt được là: %d\n", maxProfit);
    return 0;
}
