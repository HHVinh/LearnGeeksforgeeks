#include <stdio.h>
int maxSubarraySum(int arr[], int n) {
    int max_sum = arr[0];  // Tổng dãy con lớn nhất
    int current_sum = arr[0];  // Tổng dãy con kết thúc tại phần tử hiện tại
    for (int i = 1; i < n; i++) {
        // Tính tổng dãy con kết thúc tại phần tử i
        current_sum = (current_sum + arr[i] > arr[i]) ? (current_sum + arr[i]) : arr[i];
        // Cập nhật tổng dãy con lớn nhất nếu cần
        if (current_sum > max_sum) {
            max_sum = current_sum;
        }
    }
    return max_sum;
}

int main() {
    int n; printf("Nhập số lượng phần tử mảng: "); scanf("%d", &n);
    int arr[n]; printf("Nhập các phần tử mảng: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Gọi hàm tính tổng dãy con lớn nhất và in kết quả
    printf("Tổng con lớn nhất trong mảng là: %d\n", maxSubarraySum(arr, n));

    return 0;
}

