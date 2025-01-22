#include <stdio.h>
// Hàm kiểm tra mảng sắp xếp
int isSorted(int arr[], int size) {
    int ascending = 1; // Biến kiểm tra tăng dần
    int descending = 1; // Biến kiểm tra giảm dần
    for (int i = 0; i < size - 1; i++) {
        if (arr[i] > arr[i + 1]) {ascending = 0;} // Không tăng dần
        if (arr[i] < arr[i + 1]) {descending = 0;} // Không giảm dần
    }
    if (ascending) return 1; // Tăng dần
    if (descending) return -1; // Giảm dần
    return 0; // Không sắp xếp
}

int main() {
    int n; printf("Nhập số phần tử của mảng: ");scanf("%d", &n);
    int arr[n];
    printf("Nhập các phần tử của mảng: ");
    for (int i = 0; i < n; i++) {scanf("%d", &arr[i]);}
    int result = isSorted(arr, n);
    if (result == 1) {
        printf("Mảng được sắp xếp tăng dần.\n");
    } else if (result == -1) {
        printf("Mảng được sắp xếp giảm dần.\n");
    } else {
        printf("Mảng không được sắp xếp tăng hoặc giảm.\n");
    }
    return 0;
}
