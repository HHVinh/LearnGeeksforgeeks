#include <stdio.h>

// Hàm đảo ngược một đoạn mảng từ chỉ số `start` đến `end`
void reverse(int arr[], int start, int end) {
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

// Hàm xoay mảng theo `d` phần tử
void rotateArray(int arr[], int n, int d) {
    reverse(arr, 0, n - 1);   // Bước 1: Đảo ngược toàn bộ mảng
    reverse(arr, 0, d - 1);   // Bước 2: Đảo ngược `d` phần tử đầu tiên
    reverse(arr, d, n - 1);   // Bước 3: Đảo ngược phần còn lại
}

// Hàm hiển thị mảng
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int n;
    printf("Nhập số lượng phần tử: ");
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        printf("Nhập phần tử %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Nhập số lần xoay vòng
    int a;
    printf("Nhập số lần xoay vòng: ");
    scanf("%d", &a);

    // Tính số phần tử thực sự cần xoay
    int d = a % n;

    // Xoay mảng
    rotateArray(arr, n, d);

    // In kết quả
    printf("Kết quả sau khi xoay %d vòng là: ", a);
    printArray(arr, n);

    return 0;
}
