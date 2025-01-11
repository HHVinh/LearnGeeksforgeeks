#include <stdio.h>
#include <stdlib.h>

// Hàm tìm phần tử bị lặp trong mảng
int findDuplicate(int* arr, int size) {
    int slow = arr[0]; // Con trỏ chậm
    int fast = arr[0]; // Con trỏ nhanh

    // Tìm điểm gặp nhau của con rùa và con thỏ
    do {
        slow = arr[slow];          // Di chuyển một bước
        fast = arr[arr[fast]];     // Di chuyển hai bước
    } while (slow != fast); // Lặp cho đến khi con rùa gặp con thỏ

    fast = arr[0]; // Đặt lại con thỏ về điểm bắt đầu

    // Di chuyển từng bước cho đến khi con rùa và con thỏ gặp nhau tại phần tử bị lặp
    while (slow != fast) {
        slow = arr[slow];
        fast = arr[fast];
    }

    // Trả về số bị lặp
    return slow;
}

int main() {
    int size;

    // Yêu cầu nhập kích thước mảng
    printf("Nhập số phần tử trong mảng: ");
    scanf("%d", &size);

    int* arr = (int*)malloc(size * sizeof(int)); // Cấp phát bộ nhớ cho mảng động

    // Yêu cầu nhập các phần tử cho mảng
    printf("Nhập các phần tử cho mảng: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Tìm phần tử bị lặp trong mảng
    int res = findDuplicate(arr, size);

    // In kết quả
    printf("Phần tử bị lặp là: %d\n", res);

    free(arr); // Giải phóng bộ nhớ đã cấp phát

    return 0;
}
