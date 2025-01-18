#include <stdio.h>
// Hàm hoán đổi hai phần tử
void hoanDoi(int* a, int* b) {
    int tam = *a;
    *a = *b; *b = tam;
}
void daoNguoc(int arr[], int l, int r) {
    if (l < r) {
        hoanDoi(&arr[l], &arr[r]);  // Hoán đổi arr[l] và arr[r]
        daoNguoc(arr, ++l, --r);     // Gọi đệ quy để tiếp tục hoán đổi các phần tử giữa
    }
}
void hopNhat(int arr[], int l, int m, int r) {
    int i = l;
    int j = m + 1;
    // Tìm chỉ số bắt đầu của phần tử dương trong nửa mảng bên trái (tìm chỉ số của Lp)
    while (i <= m && arr[i] < 0)
        i++;
    // Tìm chỉ số kết thúc của phần tử âm trong nửa mảng bên phải (tìm chỉ số của Rn)
    while (j <= r && arr[j] < 0)
        j++;
    j--;
    // Đảo ngược phần dương trong mảng con bên trái (arr[i..m])
    daoNguoc(arr, i, m);
    // Đảo ngược phần âm trong mảng con bên phải (arr[m+1..j])
    daoNguoc(arr, m + 1, j);
    // Đảo ngược lại phần arr[i..j]
    daoNguoc(arr, i, j);
}
// Hàm để phân chia dương và âm trong mảng
void sapXepPhanLoai(int arr[], int l, int r) {
    if (l < r) {
        int m = l + (r - l) / 2;  // Tính chỉ số giữa mảng
        // Gọi đệ quy để sắp xếp nửa đầu và nửa sau
        sapXepPhanLoai(arr, l, m);
        sapXepPhanLoai(arr, m + 1, r);

        hopNhat(arr, l, m, r);  // Hợp nhất mảng con
    }
}

int main() {
    int n; printf("Nhập số lượng phần tử của mảng: "); scanf("%d", &n);
    int arr[n]; printf("Nhập các phần tử của mảng: ");
    for (int i = 0; i < n; i++) {scanf("%d", &arr[i]);}
    sapXepPhanLoai(arr, 0, n - 1);
    printf("Mảng sau khi phân loại dương và âm: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
