#include <stdio.h>
#include <stdlib.h>
#define MAX_VALUE 1000  // Giới hạn giá trị trong mảng hợp nhất (có thể điều chỉnh tùy vào dữ liệu)
void findUnion(int a[], int n, int b[], int m) {
    int i;
    int unionArray[1000];  // Mảng lưu kết quả hợp nhất
    int unionSize = 0;      // Kích thước của mảng hợp nhất
    // Khởi tạo mảng boolean để theo dõi phần tử đã xuất hiện
    int appeared[MAX_VALUE] = {0};
    // Thêm tất cả phần tử của mảng a vào mảng hợp nhất nếu chưa xuất hiện
    for (i = 0; i < n; i++) {
        if (!appeared[a[i]]) {
            appeared[a[i]] = 1;  // Đánh dấu phần tử đã xuất hiện
            unionArray[unionSize++] = a[i];  // Thêm phần tử vào mảng hợp nhất
        }
    }
    // Thêm tất cả phần tử của mảng b vào mảng hợp nhất nếu chưa xuất hiện
    for (i = 0; i < m; i++) {
        if (!appeared[b[i]]) {
            appeared[b[i]] = 1;  // Đánh dấu phần tử đã xuất hiện
            unionArray[unionSize++] = b[i];  // Thêm phần tử vào mảng hợp nhất
        }
    }
    printf("Hợp nhất của hai mảng là: ");  // In kết quả hợp nhất
    for (i = 0; i < unionSize; i++) {
        printf("%d ", unionArray[i]);
    }
    printf("\n");
}

int main() {
    int n, m;

    // Nhập số phần tử của mảng a và b
    printf("Nhập số phần tử của mảng a: ");
    scanf("%d", &n);
    int a[n];
    
    printf("Nhập các phần tử của mảng a: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Nhập số phần tử của mảng b: ");
    scanf("%d", &m);
    int b[m];

    printf("Nhập các phần tử của mảng b: ");
    for (int i = 0; i < m; i++) {
        scanf("%d", &b[i]);
    }

    // Gọi hàm tìm hợp nhất
    findUnion(a, n, b, m);  

    return 0;
}
