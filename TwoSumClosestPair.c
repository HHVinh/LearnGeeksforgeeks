#include <stdio.h>
#include <stdlib.h>
#include <math.h>
// Hàm so sánh để sử dụng với qsort
int compare(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}
// Hàm tìm cặp có tổng gần 0 nhất
int closestToZero(int arr[], int n) {
    // Sắp xếp mảng theo thứ tự tăng dần
    qsort(arr, n, sizeof(int), compare);
    // Khởi tạo hai con trỏ, một ở đầu mảng, một ở cuối mảng
    int i = 0, j = n - 1;
    // Khởi tạo tổng ban đầu là tổng của phần tử đầu và cuối mảng
    int sum = arr[i] + arr[j];
    int diff = abs(sum);  // Khởi tạo hiệu số tuyệt đối ban đầu
    while (i < j) {
        // Nếu tổng bằng 0, trả về 0 ngay lập tức
        if (arr[i] + arr[j] == 0) {
            return 0;
        }
        // Tính tổng của cặp phần tử hiện tại và hiệu số tuyệt đối
        int current_sum = arr[i] + arr[j];
        int current_diff = abs(current_sum);
        // Nếu hiệu số tuyệt đối nhỏ hơn hiệu số trước đó, cập nhật kết quả
        if (current_diff < diff) {
            diff = current_diff;
            sum = current_sum;
        } else if (current_diff == diff) {
            // Nếu có nhiều cặp có hiệu số tuyệt đối bằng nhau, chọn cặp có tổng lớn hơn
            sum = (sum > current_sum) ? sum : current_sum;
        }
        // Di chuyển con trỏ dựa trên tổng hiện tại
        if (current_sum > 0) {
            j--;  // Nếu tổng dương, giảm con trỏ bên phải
        } else {
            i++;  // Nếu tổng âm, tăng con trỏ bên trái
        }
    }
    return sum;  // Trả về tổng gần 0 nhất
}

int main() {
    int n; printf("Nhập số phần tử của mảng: "); scanf("%d", &n);
    int arr[n]; printf("Nhập các phần tử của mảng:\n");
    for (int i = 0; i < n; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
    printf("Tổng gần 0 nhất là: %d\n", closestToZero(arr, n));
    return 0;
}
