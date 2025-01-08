#include <stdio.h>
#include <stdbool.h>
bool isSorted(int arr[], int n) {
    // Duyệt qua mảng từ đầu đến trước khi đến phần tử cuối cùng
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            return false;
        }
    }
    return true;
}
int main() {
    int n;
    printf("Nhập số lượng phần tử trong mảng: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Nhập các phần tử của mảng cách nhau bởi khoảng trắng: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    if (isSorted(arr, n)) {
        printf("Mảng đã được xếp theo thứ tự tăng dần.\n");
    } else {
        printf("Mảng chưa được xếp theo thứ tự tăng dần.\n");
    }
    
    return 0;
}
