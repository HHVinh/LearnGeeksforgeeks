#include <stdio.h>
void findUnion(int a[], int b[], int n, int m) {
    int i = 0, j = 0;
    // Duyệt qua hai mảng để tìm hợp nhất
    while (i < n && j < m) {
        // Nếu phần tử trong cả hai mảng giống nhau
        if (a[i] == b[j]) {
            // In ra phần tử và tăng cả hai con trỏ
            printf("%d ", a[i]);
            i++;
            j++;
        }
        // Nếu phần tử trong mảng a nhỏ hơn mảng b, chỉ tăng con trỏ của a
        else if (a[i] < b[j]) {
            printf("%d ", a[i]);
            i++;
        }
        // Nếu phần tử trong mảng b nhỏ hơn mảng a, chỉ tăng con trỏ của b
        else {
            printf("%d ", b[j]);
            j++;
        }
    }
    // Thêm phần tử còn lại của mảng a nếu có
    while (i < n) {
        printf("%d ", a[i]);
        i++;
    }
    // Thêm phần tử còn lại của mảng b nếu có
    while (j < m) {
        printf("%d ", b[j]);
        j++;
    }
}

int main() {
    int n, m;
    printf("Nhập kích thước mảng a: ");
    scanf("%d", &n);
    int a[n];
    printf("Nhập phần tử mảng a (đã sắp xếp): ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    printf("Nhập kích thước mảng b: ");
    scanf("%d", &m);
    int b[m];
    printf("Nhập phần tử mảng b (đã sắp xếp): ");
    for (int i = 0; i < m; i++) {
        scanf("%d", &b[i]);
    }
    printf("Hợp nhất của hai mảng là: ");
    findUnion(a, b, n, m);
    return 0;
}
