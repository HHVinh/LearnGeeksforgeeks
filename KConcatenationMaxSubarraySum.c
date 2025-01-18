#include <stdio.h>
#include <limits.h>

// Hàm tìm tổng con lớn nhất trong mảng đã được lặp lại k lần
int max_subarray_sum_repeated(int arr[], int n, int k) {
    int max_so_far = INT_MIN; // Ban đầu đặt giá trị nhỏ nhất có thể
    int max_ending_here = 0;  // Biến lưu trữ tổng con kết thúc tại vị trí i

    // Lặp qua tất cả các phần tử trong k lần lặp mảng
    for (int i = 0; i < n * k; i++) {
        // Dùng toán tử mô-đun để lấy phần tử của mảng (lặp qua mảng nhiều lần)
        max_ending_here += arr[i % n];

        // Cập nhật tổng con lớn nhất
        if (max_ending_here > max_so_far) {
            max_so_far = max_ending_here;
        }

        // Nếu tổng con hiện tại nhỏ hơn 0, bắt đầu lại từ 0
        if (max_ending_here < 0) {
            max_ending_here = 0;
        }
    }
    return max_so_far;
}

int main() {
    int n, k;

    // Nhập mảng và số lần lặp từ người dùng
    printf("Nhập số phần tử của mảng: ");
    scanf("%d", &n);

    int arr[n];
    printf("Nhập mảng số nguyên: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Nhập số lần lặp mảng k: ");
    scanf("%d", &k);

    // Gọi hàm và in kết quả
    printf("Tổng con lớn nhất là: %d\n", max_subarray_sum_repeated(arr, n, k));

    return 0;
}
