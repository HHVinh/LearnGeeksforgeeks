#include <stdio.h>
// Hàm tìm phần tử ceiling trong mảng đã sắp xếp
int findCeiling(int arr[], int n, int x) {
    int low = 0, high = n - 1;
    // Kiểm tra nếu mảng rỗng
    if (n == 0) {
        return -1; // Trả về -1 nếu mảng rỗng
    }
    // Tìm kiếm nhị phân
    while (low <= high) {
        int mid = low + (high - low) / 2;
        // Nếu phần tử tại mid bằng x, thì đó chính là ceiling
        if (arr[mid] == x) {
            return arr[mid];
        }
        // Nếu phần tử tại mid lớn hơn x, thì có thể là phần tử ceiling
        if (arr[mid] > x) {
            high = mid - 1; // Tìm tiếp ở bên trái
        } else {
            low = mid + 1; // Tìm tiếp ở bên phải
        }
    }
    // Sau khi vòng lặp kết thúc, low là chỉ số của phần tử ceiling
    if (low < n) {
        return arr[low]; // Trả về phần tử ceiling
    }
    return -1; // Không tìm thấy phần tử ceiling
}

int main() {
    int n, x;
    // Nhập kích thước mảng và mảng đã sắp xếp
    printf("Nhập số lượng phần tử trong mảng: ");
    scanf("%d", &n);
    int arr[n];
    printf("Nhập các phần tử trong mảng (đã sắp xếp): ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    // Nhập giá trị x
    printf("Nhập giá trị x: ");
    scanf("%d", &x);
    // Tìm phần tử ceiling
    int result = findCeiling(arr, n, x);
    // Xuất kết quả
    if (result == -1) {
        printf("Không có phần tử ceiling cho %d trong mảng.\n", x);
    } else {
        printf("Phần tử ceiling của %d là %d.\n", x, result);
    }
    return 0;
}
