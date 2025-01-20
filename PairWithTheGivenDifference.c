#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX 1000  // Định nghĩa kích thước tối đa cho bảng băm

// Hàm tìm cặp có hiệu bằng n trong mảng chưa sắp xếp
int findPairWithDifference(int arr[], int size, int n) {
    int mpp[MAX] = {0};  // Mảng đánh dấu các phần tử đã gặp

    for (int i = 0; i < size; i++) {
        // Kiểm tra xem có phần tử nào có hiệu với arr[i] bằng n không
        if (mpp[arr[i] + n] > 0) {  // Nếu arr[i] + n đã có trong bảng băm
            printf("Cặp tìm thấy: (%d, %d)\n", arr[i], arr[i] + n);
            return 1;  // Tìm thấy cặp
        }
        if (arr[i] - n >= 0 && mpp[arr[i] - n] > 0) {  // Nếu arr[i] - n đã có trong bảng băm
            printf("Cặp tìm thấy: (%d, %d)\n", arr[i], arr[i] - n);
            return 1;  // Tìm thấy cặp
        }
        
        // Lưu phần tử vào Hash Table
        mpp[arr[i]] = 1;
    }

    printf("Không tìm thấy cặp nào\n");
    return 0;  // Không tìm thấy cặp
}

int main() {
    int n;

    // Nhập số phần tử trong mảng
    printf("Nhập số lượng phần tử trong mảng: ");
    scanf("%d", &n);

    int arr[n];

    // Nhập các phần tử trong mảng
    printf("Nhập các phần tử trong mảng: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Nhập giá trị hiệu cần tìm
    int diff;
    printf("Nhập giá trị hiệu cần tìm (có thể là số âm): ");
    scanf("%d", &diff);

    // Gọi hàm tìm cặp có hiệu bằng diff
    findPairWithDifference(arr, n, diff);

    return 0;
}
