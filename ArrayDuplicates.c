#include <stdio.h>
#include <stdlib.h>

void arrayDuplicate(int arr[], int n) {
    int result[n]; // Mảng tạm để lưu các giá trị trùng lặp
    int resultCount = 0; // Biến đếm số lượng phần tử trùng lặp

    // Đánh dấu tần suất xuất hiện của từng giá trị
    for (int i = 0; i < n; i++) {
        int val = abs(arr[i]) % n; // Đảm bảo chỉ số không âm
        if (arr[val] >= n) {
            // Nếu giá trị lớn hơn hoặc bằng n, đây là phần tử trùng lặp
            if (arr[val] < 2 * n) { // Đảm bảo chỉ thêm 1 lần
                result[resultCount++] = val;
                arr[val] += n; // Đánh dấu là đã ghi nhận
            }
        } else {
            // Đánh dấu giá trị tại chỉ số `val`
            arr[val] += n;
        }
    }

    // In mảng kết quả
    if (resultCount == 0) {
        printf("[]\n");
    } else {
        printf("Duplicate elements: ");
        for (int i = 0; i < resultCount; i++) {
            printf("%d ", result[i]);
        }
        printf("\n");
    }
}

int main() {
    int n;
    printf("Nhập số lượng phần tử của mảng: ");
    scanf("%d", &n);

    int arr[n];
    printf("Nhập các phần tử của mảng: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    arrayDuplicate(arr, n);

    return 0;
}
