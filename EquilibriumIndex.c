#include <stdio.h>
int equilibriumPoint(int arr[], int n) {
    // Khởi tạo tổng tiền tố (prefSum) và tổng toàn bộ mảng
    int leftSum = 0;
    int rightSum = 0;

    // Tính tổng toàn bộ mảng
    for (int i = 0; i < n; i++) {
        rightSum += arr[i];
    }

    // Lặp qua mảng và kiểm tra chỉ số cân bằng
    for (int pivot = 0; pivot < n; pivot++) {
        // Trừ đi phần tử hiện tại khỏi rightSum để có tổng bên phải
        rightSum -= arr[pivot];

        // Nếu tổng tiền tố và tổng hậu tố (rightSum) bằng nhau, ta tìm được chỉ số cân bằng
        if (leftSum == rightSum) {
            return pivot;
        }

        // Cập nhật tổng tiền tố (leftSum)
        leftSum += arr[pivot];
    }

    // Nếu không tìm thấy chỉ số cân bằng, trả về -1
    return -1;
}

int main() {
    int n;

    // Nhập số phần tử của mảng
    printf("Nhập số phần tử của mảng: ");
    scanf("%d", &n);

    int arr[n];

    // Nhập các phần tử của mảng
    printf("Nhập các phần tử của mảng (cách nhau bởi dấu cách): ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Gọi hàm tìm chỉ số cân bằng và in kết quả
    int result = equilibriumPoint(arr, n);
    printf("Chỉ số cân bằng là: %d\n", result);

    return 0;
}
