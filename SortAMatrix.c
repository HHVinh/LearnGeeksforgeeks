#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// Hàm so sánh để sử dụng trong qsort
int compare(const void *a, const void *b) {return (*(int *)a - *(int *)b);}
// Hàm sắp xếp toàn bộ ma trận
void sapXepMaTran(int soHang, int soCot, int maTran[soHang][soCot]) {
    int tongSoPhanTu = soHang * soCot; // Tổng số phần tử trong ma trận
    int mangPhang[tongSoPhanTu];      // Mảng phụ để làm phẳng ma trận
    int chiSo = 0;                    // Chỉ số để duyệt qua các phần tử
    // Bước 1: Làm phẳng ma trận thành mảng 1 chiều
    for (int i = 0; i < soHang; i++) {
        for (int j = 0; j < soCot; j++) {
            mangPhang[chiSo++] = maTran[i][j];
        }
    }
    // Bước 2: Sắp xếp mảng 1 chiều bằng qsort
    qsort(mangPhang, tongSoPhanTu, sizeof(int), compare);
    // Bước 3: Ghi lại mảng đã sắp xếp vào ma trận
    chiSo = 0;
    for (int i = 0; i < soHang; i++) {
        for (int j = 0; j < soCot; j++) {
            maTran[i][j] = mangPhang[chiSo++];
        }
    }
}
// Hàm in ma trận
void inMaTran(int soHang, int soCot, int maTran[soHang][soCot]) {
    for (int i = 0; i < soHang; i++) {
        for (int j = 0; j < soCot; j++) {
            printf("%d ", maTran[i][j]);
        }
        printf("\n");
    }
}
int main() {
    int soHang, soCot;
    printf("Nhập số hàng của ma trận: "); scanf("%d", &soHang);
    printf("Nhập số cột của ma trận: "); scanf("%d", &soCot);
    int maTran[soHang][soCot];
    printf("Nhập các phần tử của ma trận, từng hàng một:\n");
    for (int i = 0; i < soHang; i++) {
        printf("Nhập hàng %d (gồm %d phần tử, cách nhau bởi dấu cách): ", i + 1, soCot);
        for (int j = 0; j < soCot; j++) {
            scanf("%d", &maTran[i][j]);
        }
    }
    // Sắp xếp toàn bộ ma trận
    sapXepMaTran(soHang, soCot, maTran);
    // In ma trận đã sắp xếp
    printf("Ma trận sau khi sắp xếp toàn bộ:\n");
    inMaTran(soHang, soCot, maTran);
    return 0;
}


