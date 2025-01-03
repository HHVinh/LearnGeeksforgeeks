#include <stdio.h>
#include <math.h>
int pairCubeCount(int n) {
    if (n == 0) return 0; // Trường hợp đặc biệt
    int count = 0;
    int nCan3 = (int)round(pow(n, 1.0 / 3.0)); // Căn bậc ba gần đúng của n
    for (int i = 1; i <= nCan3; i++) { // Lặp qua từ 1 đến căn bậc ba của n
        int a3 = i * i * i;
        int b3 = n - a3;
        // Kiểm tra nếu b3 là lập phương của một số nguyên
        int b = round(pow(b3, 1.0 / 3.0)); // Tính căn bậc ba của b3 và làm tròn
        if (b * b * b == b3) { // Kiểm tra nếu b^3 = b3
            count++;
            printf("\nCặp số a và b là: %d - %d", i, b); // In cặp a và b
        }
    }
    return count;
}
int main() {
    int n;
    printf("Nhập n: ");
    scanf("%d", &n);
    int res = pairCubeCount(n);
    printf("\n\nSố cặp a - b là: %d\n", res);
    return 0;
}
