#include <stdio.h>

// Hàm hoán đổi hai phần tử trong mảng
void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Hàm sắp xếp mảng theo dạng sóng
void sortInWave(int arr[], int n) {
    // Duyệt qua các phần tử ở chỉ số chẵn
    for (int i = 0; i < n; i += 2) {
        // Nếu phần tử tại vị trí chẵn nhỏ hơn phần tử trước đó, hoán đổi chúng
        if (i > 0 && arr[i] < arr[i-1]) {
            swap(&arr[i], &arr[i-1]);
        }
        // Nếu phần tử tại vị trí chẵn nhỏ hơn phần tử sau đó, hoán đổi chúng
        if (i < n-1 && arr[i] < arr[i+1]) {
            swap(&arr[i], &arr[i+1]);
        }
    }
}

int main() {
    int n;
    
    // Nhập số lượng phần tử trong mảng
    printf("Nhập số lượng phần tử trong mảng: ");
    scanf("%d", &n);

    int arr[n];

    // Nhập các phần tử của mảng
    printf("Nhập các phần tử trong mảng: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Gọi hàm để sắp xếp mảng theo dạng sóng
    sortInWave(arr, n);

    // In kết quả mảng sau khi sắp xếp
    printf("Mảng sau khi sắp xếp theo dạng sóng: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
