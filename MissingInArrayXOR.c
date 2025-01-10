#include <stdio.h>
int findMissingNumber(int arr[], int n) {
    int xor1 = 0; int xor2 = 0;
    // XOR tất cả các phần tử trong mảng
    for (int i = 0; i < n - 1; i++) { // Ví dụ mảng 5 số thì i từ 0 -> 3 là 4 số
        xor2 ^= arr[i];
    }
    // XOR tất cả các số từ 1 đến n
    for (int i = 1; i <= n; i++) { // Do bắt đầu từ 1 nên i từ 1 -> 5 mới đủ 5 số
        xor1 ^= i;
    }
    return xor1 ^ xor2;
}
int main() {
    int n;
    printf("Nhập số lượng phần tử trong mảng (bao gồm số bị thiếu): "); scanf("%d", &n);

    int arr[n - 1];
    printf("Nhập các phần tử của mảng (mảng thiếu 1 số): ");
    for (int i = 0; i < n - 1; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Số bị thiếu là: %d\n", findMissingNumber(arr, n - 1));
    return 0;
}
