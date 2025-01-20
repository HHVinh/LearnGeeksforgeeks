#include <stdio.h>

// Hàm đệ quy để đếm số lượng bit 1 trong mảng đã sắp xếp giảm dần
int countOnes(int arr[], int low, int high) {
    // Nếu phạm vi hợp lệ (high >= low)
    if (high >= low) {
        // Tính chỉ số giữa mảng
        int mid = low + (high - low) / 2;

        // Kiểm tra xem phần tử ở giữa có phải là phần tử 1 cuối cùng không
        if ((mid == high || arr[mid + 1] == 0) && arr[mid] == 1) {
            return mid + 1; // Trả về số lượng bit 1 trong mảng
        }

        // Nếu phần tử ở giữa là 1, đệ quy tìm trong nửa phải
        if (arr[mid] == 1) {
            return countOnes(arr, mid + 1, high);
        }

        // Nếu phần tử ở giữa không phải là 1, đệ quy tìm trong nửa trái
        return countOnes(arr, low, mid - 1);
    }

    // Trường hợp mảng không có phần tử nào là 1
    return 0;
}

int main() {
    int n;
    printf("Nhập số phần tử của mảng nhị phân: ");
    scanf("%d", &n);

    int arr[n];

    // Nhập mảng từ người dùng
    printf("Nhập các phần tử của mảng (0 hoặc 1): ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Đếm số bit 1 trong mảng đã sắp xếp giảm dần
    printf("Số lượng bit 1 trong mảng là: %d\n", countOnes(arr, 0, n - 1));

    return 0;
}
