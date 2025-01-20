#include <stdio.h>
#include <stdlib.h>

int firstRepeatingElement(int arr[], int n) {
    int* hashTable = (int*)calloc(n, sizeof(int));  // Sử dụng mảng để theo dõi các phần tử đã gặp

    for (int i = 0; i < n; i++) {
        if (hashTable[arr[i]] == 1) {
            free(hashTable);  // Giải phóng bộ nhớ
            return arr[i];    // Trả về phần tử lặp lại đầu tiên
        }
        hashTable[arr[i]] = 1;
    }

    free(hashTable);  // Giải phóng bộ nhớ
    return -1;  // Không có phần tử lặp lại
}

int main() {
    int n;
    printf("Nhập số lượng phần tử của mảng: ");
    scanf("%d", &n);
    
    int* arr = (int*)malloc(n * sizeof(int));  // Cấp phát bộ nhớ cho mảng
    printf("Nhập các phần tử của mảng: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int result = firstRepeatingElement(arr, n);
    if (result == -1) {
        printf("Không có phần tử nào lặp lại!\n");
    } else {
        printf("Phần tử lặp lại đầu tiên là: %d\n", result);
    }

    free(arr);  // Giải phóng bộ nhớ
    return 0;
}
