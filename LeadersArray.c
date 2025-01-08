#include <stdio.h>
#include <stdlib.h>

int* leadersArray(int n, int arr[], int* resSize) {
    // Cấp phát bộ nhớ cho mảng kết quả, tối đa n phần tử
    int* res = (int*)malloc(n * sizeof(int));
    int count = 0;

    // Khởi tạo phần tử cuối cùng là phần tử dẫn đầu đầu tiên
    int maxRight = arr[n - 1];
    res[count++] = maxRight;  // Thêm phần tử cuối cùng vào mảng kết quả

    // Duyệt mảng từ phải qua trái
    for (int i = n - 2; i >= 0; i--) {  // Bắt đầu từ phần tử thứ hai từ cuối
        if (arr[i] >= maxRight) {  // Nếu phần tử hiện tại lớn hơn hoặc bằng maxRight
            maxRight = arr[i];  // Cập nhật maxRight
            res[count++] = arr[i];  // Thêm phần tử vào mảng kết quả
        }
    }

    // Đảo ngược mảng kết quả để duy trì thứ tự ban đầu
    for (int i = 0; i < count / 2; i++) {
        int temp = res[i];
        res[i] = res[count - i - 1];
        res[count - i - 1] = temp;
    }
    *resSize = count;  // Cập nhật kích thước mảng kết quả
    return res;
}

int main() {
    // Nhập số lượng phần tử mảng
    int n;
    printf("Nhập số lượng phần tử trong mảng: ");
    scanf("%d", &n);

    // Nhập mảng
    int arr[n];
    printf("Nhập các phần tử của mảng cách nhau bởi khoảng trắng: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Tìm các phần tử dẫn đầu
    int resSize;
    int* result = leadersArray(n, arr, &resSize);

    // In mảng các phần tử dẫn đầu
    printf("Các phần tử dẫn đầu là: ");
    for (int i = 0; i < resSize; i++) {
        printf("%d ", result[i]);
    }
    printf("\n");

    // Giải phóng bộ nhớ đã cấp phát
    free(result);
    return 0;
}
