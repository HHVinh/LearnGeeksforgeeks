#include <stdio.h>

int largest(int arr[], int n) {
    int i; int max = arr[0];
    // Duyệt qua các phần tử trong mảng từ phần tử thứ 2 trở đi
    for (i = 1; i < n; i++) {
        if (arr[i] > max) {  // Nếu phần tử hiện tại lớn hơn max
            max = arr[i];  // Cập nhật max
        }
    }
    return max;
}
int main() {
    int n;
    // Yêu cầu người dùng nhập số lượng phần tử trong mảng
    printf("Nhập số lượng phần tử trong mảng: "); scanf("%d", &n);

    int arr[n];  // Khai báo mảng với số lượng phần tử do người dùng nhập

    // Nhập các phần tử cho mảng
    for (int i = 0; i < n; i++) {
        printf("Nhập phần tử thứ %d: ", i + 1); scanf("%d", &arr[i]);
    }
    
    printf("Giá trị lớn nhất trong mảng là: %d", largest(arr, n));

    return 0;
}
