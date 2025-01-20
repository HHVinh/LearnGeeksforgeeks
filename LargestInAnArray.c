#include <stdio.h>
#include <stdlib.h>
// Hàm so sánh hai phần tử trong mảng để sử dụng trong qsort
int compare(const void* a, const void* b) {
    return (*(int*)a - *(int*)b); // So sánh giá trị của hai số nguyên
}
// Hàm tìm phần tử lớn nhất trong mảng
int largest(int arr[], int n) {
    // Sắp xếp mảng tăng dần bằng hàm qsort
    qsort(arr, n, sizeof(int), compare);
    // Trả về phần tử cuối cùng (phần tử lớn nhất)
    return arr[n - 1];
}
int main() {
    int n;
    // Yêu cầu người dùng nhập kích thước mảng
    printf("Nhập số lượng phần tử của mảng: ");
    scanf("%d", &n);
    int arr[n];
    // Yêu cầu người dùng nhập từng phần tử của mảng
    printf("Nhập các phần tử của mảng:\n");
    for (int i = 0; i < n; i++) {
        printf("Phần tử thứ %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    // Tìm và in ra phần tử lớn nhất
    printf("Phần tử lớn nhất trong mảng là: %d\n", largest(arr, n));
    return 0;
}
