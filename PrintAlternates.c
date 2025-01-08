#include <stdio.h>
void getAlternates(int arr[], int n) {
    // Lặp qua các phần tử có chỉ số chẵn
    for (int i = 0; i < n; i += 2) {
        printf("%d ", arr[i]);
    }
}
int main() {
    int n;
    printf("Nhập số lượng phần tử của mảng: ");
    scanf("%d", &n);
    int arr[n];
    // Yêu cầu nhập các phần tử của mảng
    printf("Nhập %d phần tử của mảng:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Phần tử thứ %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("Các phần tử cách nhau một vị trí: ");
    getAlternates(arr, n);

    return 0;
}
