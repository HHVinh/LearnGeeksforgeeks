#include <stdio.h>

int cost(int arr[], int n) {
    // Tính chi phí tối thiểu là (n-1) nhân với phần tử nhỏ nhất trong mảng
    int minVal = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] < minVal) {
            minVal = arr[i];
        }
    }
    return (n - 1) * minVal; // Trả về chi phí tối thiểu
}

int main() {
    int n;
    printf("Nhập số lượng phần tử trong mảng: ");
    scanf("%d", &n);

    int arr[n];
    printf("Nhập %d phần tử của mảng cách nhau bởi khoảng trắng: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int result = cost(arr, n);
    printf("Chi phí tối thiểu là: %d\n", result);

    return 0;
}
