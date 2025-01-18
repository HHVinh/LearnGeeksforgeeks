#include <stdio.h>
#include <stdlib.h>
// Hàm so sánh để sắp xếp mảng
int cmp(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}
// Hàm tìm phần tử chung của 2 mảng
void intersection(int a[], int b[], int n, int m) {
    // Sắp xếp mảng a và mảng b
    qsort(a, n, sizeof(int), cmp);
    qsort(b, m, sizeof(int), cmp);

    // Duyệt mảng a và b để tìm phần tử chung
    int i = 0, j = 0;
    printf("Phần tử chung của 2 mảng là: ");
    while (i < n && j < m) {
        if (a[i] == b[j]) {
            printf("%d ", a[i]);
            i++;
            j++;
        } else if (a[i] < b[j]) {
            i++;
        } else {
            j++;
        }
    }
    printf("\n");
}

int main() {
    int n, m;

    // Nhập kích thước và phần tử của mảng a
    printf("Nhập kích thước mảng a: ");
    scanf("%d", &n);
    int a[n];
    printf("Nhập phần tử mảng a: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // Nhập kích thước và phần tử của mảng b
    printf("Nhập kích thước mảng b: ");
    scanf("%d", &m);
    int b[m];
    printf("Nhập phần tử mảng b: ");
    for (int i = 0; i < m; i++) {
        scanf("%d", &b[i]);
    }

    // Gọi hàm intersection để tìm phần tử chung
    intersection(a, b, n, m);

    return 0;
}
