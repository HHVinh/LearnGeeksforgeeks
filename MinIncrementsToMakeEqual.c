#include <stdio.h>

int max(int arr[], int n) {
    int max = arr[0];  // Khởi tạo giá trị max bằng phần tử đầu tiên
    for(int i = 1; i < n; i++) {  // Bắt đầu từ phần tử thứ 2
        if(arr[i] > max) {
            max = arr[i];  // Cập nhật max nếu tìm thấy phần tử lớn hơn
        }
    }
    return max;  // Trả về giá trị lớn nhất
}

int minOps(int arr[], int n, int k) {
    int max1 = max(arr, n);  // Tìm giá trị lớn nhất trong mảng
    int sum = 0;  // Biến lưu trữ số phép toán cần thực hiện
    for(int i = 0; i < n; i++) {
        // Kiểm tra xem phần tử có thể trở thành giá trị max1 bằng cách cộng k hay không
        if ((max1 - arr[i]) % k != 0) {
            return -1;  // Trả về -1 nếu không thể làm cho tất cả các phần tử bằng nhau
        }
        // Cộng số phép toán cần thiết vào sum
        sum += (max1 - arr[i]) / k;
    }
    return sum;  // Trả về tổng số phép toán cần thực hiện
}

int main() {
    int n;
    printf("Nhập số lượng phần tử: ");
    scanf("%d", &n);  // Nhập số phần tử mảng

    int arr[n];
    // Nhập các phần tử của mảng
    for(int i = 0; i < n; i++) {
        printf("Nhập phần tử thứ %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    int k;
    printf("Nhập bước nhảy k: ");
    scanf("%d", &k);  // Nhập giá trị k

    int result = minOps(arr, n, k);  // Tính toán số phép toán
    if (result == -1) {
        printf("Không thể làm tất cả phần tử bằng nhau với bước nhảy k.\n");
    } else {
        printf("Số phép toán tối thiểu cần thực hiện là: %d\n", result);
    }

    return 0;
}
