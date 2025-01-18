#include <stdio.h>
#include <stdlib.h>

// Hàm so sánh dùng cho qsort để sắp xếp mảng theo thứ tự tăng dần
int compare(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}

// Hàm tìm sự khác biệt nhỏ nhất giữa các gói sô cô la
int findMinDiff(int arr[], int n, int m) {
    // Sắp xếp mảng các gói sô cô la
    qsort(arr, n, sizeof(int), compare);

    // Khởi tạo sự khác biệt nhỏ nhất là vô cùng lớn
    int minDiff = __INT_MAX__;

    // Duyệt qua tất cả các cửa sổ con có kích thước m
    for (int i = 0; i <= n - m; i++) {
        // Tính sự khác biệt giữa phần tử cuối và phần tử đầu trong cửa sổ con
        int diff = arr[i + m - 1] - arr[i];

        // Nếu sự khác biệt này nhỏ hơn sự khác biệt nhỏ nhất hiện tại, cập nhật
        if (diff < minDiff) {
            minDiff = diff;
        }
    }
    return minDiff;
}

int main() {
    int n, m;

    // Yêu cầu người dùng nhập số lượng các gói sô cô la
    printf("Nhập số lượng gói sô cô la: ");
    scanf("%d", &n);

    // Khai báo mảng và yêu cầu nhập các giá trị
    int arr[n];
    printf("Nhập các gói sô cô la: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Yêu cầu nhập số lượng túi cần phân phối
    printf("Nhập số lượng túi cần phân phối: ");
    scanf("%d", &m);

    // Gọi hàm và in kết quả
    printf("Sự khác biệt nhỏ nhất là: %d\n", findMinDiff(arr, n, m));

    return 0;
}
