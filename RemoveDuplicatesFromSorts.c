#include <stdio.h>
#include <stdlib.h>

// Hàm so sánh dùng trong qsort để sắp xếp mảng theo thứ tự tăng dần
int compare(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}

// Hàm loại bỏ các phần tử trùng lặp trong mảng đã sắp xếp
int removeDuplicates(int arr[], int n) {
    if (n <= 1)
        return n;

    // Sắp xếp mảng
    qsort(arr, n, sizeof(int), compare);

    // Bắt đầu từ phần tử thứ hai
    int idx = 1;

    // Loại bỏ các phần tử trùng lặp
    for (int i = 1; i < n; i++) {
        if (arr[i] != arr[i - 1]) {
            arr[idx++] = arr[i];
        }
    }
    return idx;
}

int main() {
    int n;

    // Nhập số lượng phần tử mảng
    printf("Nhập số lượng phần tử mảng: ");
    scanf("%d", &n);

    // Khai báo mảng và nhập các phần tử
    int arr[n];
    printf("Nhập các phần tử của mảng: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Loại bỏ các phần tử trùng lặp và lấy kích thước mới của mảng
    int newSize = removeDuplicates(arr, n);

    // In mảng sau khi loại bỏ trùng lặp
    printf("Mảng sau khi loại bỏ các phần tử trùng lặp: ");
    for (int i = 0; i < newSize; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
