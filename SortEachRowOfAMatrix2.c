#include <stdio.h>
#include <stdlib.h>

// Hàm so sánh cho qsort
int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

// Hàm sắp xếp từng hàng trong ma trận bằng qsort
void sortRowWiseQSort(int rows, int cols, int matrix[rows][cols]) {
    for (int i = 0; i < rows; i++) {
        // Sử dụng qsort cho từng hàng
        qsort(matrix[i], cols, sizeof(int), compare);
    }

    // In ma trận sau khi sắp xếp
    printf("Ma trận sau khi sắp xếp:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int rows, cols;

    // Nhập số hàng và số cột
    printf("Nhập số hàng của ma trận: ");
    scanf("%d", &rows);
    printf("Nhập số cột của ma trận: ");
    scanf("%d", &cols);

    int matrix[rows][cols];

    // Nhập ma trận từ người dùng
    printf("Nhập các phần tử của ma trận:\n");
    for (int i = 0; i < rows; i++) {
        printf("Nhập các phần tử của hàng %d, cách nhau bởi khoảng trắng: ", i + 1);
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Gọi hàm sắp xếp
    sortRowWiseQSort(rows, cols, matrix);

    return 0;
}
