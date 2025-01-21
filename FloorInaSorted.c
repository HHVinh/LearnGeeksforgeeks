#include <stdio.h>
// Hàm tìm kiếm phần tử floor của x trong mảng arr[low..high]
int floorSearch(int arr[], int low, int high, int x) {
    // Nếu low > high, không tìm thấy phần tử phù hợp
    if (low > high) {
        return -1;
    }
    // Nếu phần tử x lớn hơn hoặc bằng phần tử cuối cùng của mảng
    if (x >= arr[high]) {
        return high;
    }
    // Tính chỉ số giữa của mảng
    int mid = low + (high - low) / 2;
    // Nếu phần tử giữa bằng x thì chính nó là phần tử floor
    if (arr[mid] == x) {
        return mid;
    }
    // Nếu x nằm giữa arr[mid-1] và arr[mid], floor là arr[mid-1]
    if (mid > 0 && arr[mid-1] <= x && x < arr[mid]) {
        return mid - 1;
    }
    // Nếu x nhỏ hơn arr[mid], tìm kiếm trong nửa bên trái
    if (x < arr[mid]) {
        return floorSearch(arr, low, mid - 1, x);
    }
    // Nếu x lớn hơn arr[mid], tìm kiếm trong nửa bên phải
    return floorSearch(arr, mid + 1, high, x);
}

int main() {
    int n, x;
    // Yêu cầu người dùng nhập số lượng phần tử của mảng
    printf("Nhập số lượng phần tử của mảng: ");
    scanf("%d", &n);
    int arr[n];
    // Nhập các phần tử vào mảng
    printf("Nhập các phần tử của mảng (các phần tử phải được sắp xếp tăng dần): ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    // Yêu cầu người dùng nhập số cần tìm floor
    printf("Nhập giá trị x để tìm floor: ");
    scanf("%d", &x);
    // Gọi hàm floorSearch
    int index = floorSearch(arr, 0, n - 1, x);
    // In kết quả
    if (index == -1) {
        printf("Floor của %d không tồn tại trong mảng\n", x);
    } else {
        printf("Floor của %d là %d\n", x, arr[index]);
    }
    return 0;
}
