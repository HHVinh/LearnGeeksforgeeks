#include <stdio.h>

int timPhanTuXuatHienMotLan(int ar[], int n){

    int ketQua = ar[0];

    for (int i = 1; i < n; i++)
        ketQua = ketQua ^ ar[i];

    return ketQua;
}

int main(){
    int n;

    printf("Nhập số lượng phần tử của mảng: "); scanf("%d", &n);

    int ar[n];
    printf("Nhập %d phần tử của mảng (cách nhau bằng khoảng trắng): ", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }

    printf("Phần tử xuất hiện duy nhất trong mảng là: %d\n", timPhanTuXuatHienMotLan(ar, n));
    return 0;
}