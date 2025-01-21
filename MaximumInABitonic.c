#include <stdio.h>

// Hàm tìm điểm bitonic trong mảng bằng cách sử dụng thuật toán tìm kiếm nhị phân (Binary Search)
int findMaximum(int arr[], int low, int high) {
    // Nếu chỉ còn một phần tử, đó chính là điểm bitonic
    if (low == high) {
        return arr[low];  // Trả về phần tử duy nhất (bitonic point)
    }

    // Tính chỉ số phần tử ở giữa mảng
    int mid = low + (high - low) / 2;

    // Kiểm tra nếu phần tử ở giữa là điểm bitonic (lớn hơn phần tử liền trước và liền sau)
    if (arr[mid] > arr[mid - 1] && arr[mid] > arr[mid + 1]) {
        return arr[mid];  // Nếu phần tử tại mid là điểm bitonic, trả về phần tử này
    }

    // Nếu phần tử kế tiếp lớn hơn, thì điểm bitonic nằm ở nửa phải của mảng
    if (arr[mid] < arr[mid + 1]) {
        return findMaximum(arr, mid + 1, high);  // Tiếp tục tìm kiếm trong nửa phải
    }

    // Nếu phần tử trước lớn hơn, thì điểm bitonic nằm ở nửa trái của mảng
    return findMaximum(arr, low, mid - 1);  // Tiếp tục tìm kiếm trong nửa trái
}

int main() {
    int n;
    printf("Nhập số phần tử trong mảng: ");
    scanf("%d", &n);  // Nhập số lượng phần tử trong mảng

    int arr[n];
    printf("Nhập các phần tử của mảng (mảng phải bitonic): ");
    // Nhập các phần tử của mảng
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Gọi hàm tìm điểm bitonic và lưu kết quả vào biến max
    int max = findMaximum(arr, 0, n - 1);

    // In kết quả
    printf("Điểm bitonic là: %d\n", max);

    return 0;
}
