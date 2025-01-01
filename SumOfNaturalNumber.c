#include <stdio.h>

int sumOfNaturalNumber(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) { // Chạy từ 1 đến n
        sum += i;
    }
    return sum;
}

int main() {
    int n;
    printf("Hãy nhập một số n bất kỳ: ");
    scanf("%d", &n);

    if (n < 1) {
        printf("Hãy nhập số nguyên lớn hơn 0!\n");
    } else {
        // Gọi hàm và in kết quả
        int result = sumOfNaturalNumber(n);
        printf("Tổng các số tự nhiên từ 1 đến %d là: %d\n", n, result);
    }

    return 0;
}
