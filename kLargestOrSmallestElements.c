#include <stdio.h>
#include <stdlib.h>
// Hàm hoán đổi giá trị
void hoanDoi(int *a, int *b) {
    int temp = *a; *a = *b; *b = temp;
}
// Hàm để sửa min-heap
void heapify(int heap[], int n, int i) {
    int smallest = i; // Giả sử nút i là nhỏ nhất
    int left = 2 * i + 1; int right = 2 * i + 2;

    if (left < n && heap[left] < heap[smallest])
        smallest = left;
    if (right < n && heap[right] < heap[smallest])
        smallest = right;
    if (smallest != i) {
        hoanDoi(&heap[i], &heap[smallest]);
        heapify(heap, n, smallest);
    }
}
// Hàm tìm k phần tử lớn nhất
void kLonNhat(int arr[], int n, int k) {
    int heap[k];
    // Tạo min-heap từ k phần tử đầu tiên
    for (int i = 0; i < k; i++) {heap[i] = arr[i];}
    for (int i = k / 2 - 1; i >= 0; i--) {heapify(heap, k, i);}
    // Duyệt các phần tử còn lại
    for (int i = k; i < n; i++) {
        if (arr[i] > heap[0]) {
            heap[0] = arr[i];
            heapify(heap, k, 0);
        }
    }
    // In các phần tử trong heap
    printf("Danh sách %d phần tử lớn nhất là: ", k);
    for (int i = k - 1; i >= 0; i--) {printf("%d ", heap[i]);}
    printf("\n");
}

int main() {
    int n, k;
    printf("Nhập số lượng phần tử của mảng: "); scanf("%d", &n);
    int arr[n];
    printf("Nhập các phần tử của mảng: ");
    for (int i = 0; i < n; i++) {scanf("%d", &arr[i]);}
    // Nhập số lượng k
    printf("Nhập số lượng k phần tử lớn nhất cần tìm: "); scanf("%d", &k);
    // Gọi hàm tìm k phần tử lớn nhất
    kLonNhat(arr, n, k);
    return 0;
}
