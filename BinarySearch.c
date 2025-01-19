#include <stdio.h>
// Hàm tìm kiếm nhị phân đệ quy
int binarySearch(int arr[], int low, int high, int target) {
    // Điều kiện dừng: Nếu phạm vi tìm kiếm không còn
    if (low > high) {
        return -1; // Không tìm thấy giá trị
    }

    int mid = low + (high - low) / 2; // Tính vị trí giữa để tránh tràn số nguyên

    // Nếu tìm thấy giá trị tại vị trí giữa
    if (arr[mid] == target) {
        return mid;
    }
    // Nếu giá trị tại `mid` nhỏ hơn `target`, tìm trong nửa bên phải
    else if (arr[mid] < target) {
        return binarySearch(arr, mid + 1, high, target);
    }
    // Nếu giá trị tại `mid` lớn hơn `target`, tìm trong nửa bên trái
    else {
        return binarySearch(arr, low, mid - 1, target);
    }
}

int main() {
    int n, target;

    // Yêu cầu người dùng nhập danh sách số
    printf("Nhập số lượng phần tử trong mảng: ");
    scanf("%d", &n);
    int arr[n];
    printf("Nhập các phần tử của mảng đã sắp xếp (cách nhau bởi dấu cách): ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Yêu cầu nhập giá trị cần tìm kiếm
    printf("Nhập giá trị cần tìm kiếm: ");
    scanf("%d", &target);

    // Gọi hàm tìm kiếm nhị phân
    int result = binarySearch(arr, 0, n - 1, target);

    // Hiển thị kết quả
    if (result != -1) {
        printf("Giá trị %d được tìm thấy tại vị trí %d (tính từ 0).\n", target, result);
    } else {
        printf("Giá trị %d không tồn tại trong mảng.\n", target);
    }

    return 0;
}
