#include <stdio.h>
#include <stdbool.h>
bool checkDuplicatesWithinK(int arr[], int n, int k) {
    for (int i = 0; i < n; i++) {
        // Kiểm tra tất cả các phần tử trong phạm vi k từ chỉ số hiện tại
        for (int j = i + 1; j <= i + k && j < n; j++) {
            if (arr[i] == arr[j]) {
                return true;
            }
        }
    }
    return false;  // Không tìm thấy phần tử trùng lặp trong phạm vi k
}
int main() {
    int n, k;
    printf("Nhập số lượng phần tử mảng: "); scanf("%d", &n);
    int arr[n];
    printf("Nhập các phần tử của mảng: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Nhập giá trị k: "); scanf("%d", &k);
    if (checkDuplicatesWithinK(arr, n, k)) {
        printf("True\n"); 
    } else {
        printf("False\n");
    }
    return 0;
}
