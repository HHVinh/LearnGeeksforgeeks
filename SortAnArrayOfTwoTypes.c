#include <stdio.h>
// Hàm di chuyển số âm về cuối mà không thay đổi thứ tự
void segregateElements(int arr[], int n) {
    int temp[n]; // Mảng tạm thời để lưu trữ thứ tự ban đầu
    int index = 0;
    // Đặt các số dương vào mảng trước
    for (int i = 0; i < n; i++) {
        if (arr[i] >= 0) {
            temp[index++] = arr[i];
        }
    }
    // Đặt các số âm vào mảng sau
    for (int i = 0; i < n; i++) {
        if (arr[i] < 0) {
            temp[index++] = arr[i];
        }
    }
    // Sao chép các phần tử từ mảng tạm về mảng gốc
    for (int i = 0; i < n; i++) {
        arr[i] = temp[i];
    }
}

int main() {
    int n;
    // Nhập số lượng phần tử
    printf("Nhập số lượng phần tử của mảng: ");
    scanf("%d", &n);
    int arr[n];
    // Nhập các phần tử của mảng
    printf("Nhập các phần tử của mảng: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    // Gọi hàm sắp xếp
    segregateElements(arr, n);
    // In mảng sau khi sắp xếp
    printf("Mảng sau khi di chuyển các số âm về cuối: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
