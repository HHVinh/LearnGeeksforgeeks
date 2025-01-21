#include <stdio.h>
// Hàm tìm phần tử trùng nhau giữa ba mảng
void tim_phan_tu_trung_nhau(int arr1[], int arr2[], int arr3[], int m, int n, int o) {
    int i = 0, j = 0, k = 0;
    printf("Các phần tử trùng nhau là: ");
    while (i < m && j < n && k < o) {
        // So sánh phần tử tại ba con trỏ
        if (arr1[i] == arr2[j] && arr2[j] == arr3[k]) {
            // Nếu bằng nhau, in ra phần tử và di chuyển tất cả ba con trỏ
            printf("%d ", arr1[i]);
            i++;
            j++;
            k++;
        }
        // Nếu phần tử trong mảng 1 nhỏ nhất, di chuyển con trỏ i lên
        else if (arr1[i] < arr2[j]) {
            i++;
        }
        // Nếu phần tử trong mảng 2 nhỏ nhất, di chuyển con trỏ j lên
        else if (arr2[j] < arr3[k]) {
            j++;
        }
        // Nếu phần tử trong mảng 3 nhỏ nhất, di chuyển con trỏ k lên
        else {
            k++;
        }
    }
    printf("\n");
}
// Hàm nhập mảng
void nhap_mang(int arr[], int n) {
    printf("Nhập các phần tử của mảng (cách nhau bởi khoảng trắng): ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
}
// Hàm xuất mảng
void xuat_mang(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int main() {
    int m, n, o;
    printf("Nhập số phần tử mảng 1: "); scanf("%d", &m);
    printf("Nhập số phần tử mảng 2: "); scanf("%d", &n);
    printf("Nhập số phần tử mảng 3: "); scanf("%d", &o);
    int arr1[m], arr2[n], arr3[o];
    printf("Nhập mảng 1:\n"); nhap_mang(arr1, m);
    printf("Nhập mảng 2:\n"); nhap_mang(arr2, n);
    printf("Nhập mảng 3:\n"); nhap_mang(arr3, o);
    printf("\nMảng 1 sau khi nhập: "); xuat_mang(arr1, m);
    printf("Mảng 2 sau khi nhập: "); xuat_mang(arr2, n);
    printf("Mảng 3 sau khi nhập: "); xuat_mang(arr3, o);
    tim_phan_tu_trung_nhau(arr1, arr2, arr3, m, n, o);
    return 0;
}


