#include <stdio.h>

long long subarraySum(int arr[], int n) {
    long long result = 0;

    for (int i = 0; i < n; i++) {
        result += (long long)arr[i] * (i + 1) * (n - i);
    }

    return result;
}

int main() {
    
    int n;
    printf("Nhập số lượng phần tử của mảng: "); scanf("%d", &n);

    int arr[n];
    printf("Nhập các phần tử của mảng (cách nhau bởi dấu cách): ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    long long totalSum = subarraySum(arr, n);

    printf("Tổng các phần tử trong tất cả các mảng con là: %lld\n", totalSum);

    return 0;
}
