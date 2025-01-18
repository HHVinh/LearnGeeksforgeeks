#include <stdio.h>

// Hàm tìm giao của hai mảng đã được sắp xếp
void findIntersection(int a[], int b[], int m, int n) {
    int i = 0, j = 0;

    printf("Phần tử chung của hai mảng là: ");
    while (i < m && j < n) {
        // Bỏ qua phần tử trùng lặp trong mảng a
        if (i > 0 && a[i] == a[i - 1]) {
            i++;
            continue;
        }
        // So sánh và tìm phần tử chung
        if (a[i] < b[j]) {
            i++;
        } else if (a[i] > b[j]) {
            j++;
        } else {
            printf("%d ", a[i]);
            i++;
            j++;
        }
    }
    printf("\n");
}

int main() {
    int m, n;

    // Nhập mảng a
    printf("Nhập số phần tử của mảng a: ");
    scanf("%d", &m);
    int a[m];
    printf("Nhập %d phần tử của mảng a (đã sắp xếp): ", m);
    for (int i = 0; i < m; i++) {
        scanf("%d", &a[i]);
    }

    // Nhập mảng b
    printf("Nhập số phần tử của mảng b: ");
    scanf("%d", &n);
    int b[n];
    printf("Nhập %d phần tử của mảng b (đã sắp xếp): ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &b[i]);
    }

    // Gọi hàm tìm giao của hai mảng
    findIntersection(a, b, m, n);

    return 0;
}
