#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

// Hàm so sánh dùng cho qsort (hàm sắp xếp nhanh)
int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b); // Trả về hiệu của hai phần tử để xác định thứ tự
}

// Hàm kiểm tra xem có cặp số nào trong mảng có tổng bằng giá trị target không
bool twoSum(int arr[], int n, int target) {
    // Bước 1: Sắp xếp mảng
    qsort(arr, n, sizeof(int), compare);
    // Khởi tạo hai con trỏ
    int left = 0, right = n - 1;
    // Bước 2: Duyệt mảng bằng hai con trỏ
    while (left < right) {
        int sum = arr[left] + arr[right]; // Tính tổng của hai phần tử tại con trỏ

        if (sum == target) { // Nếu tổng bằng target
            return true; // Tìm thấy cặp giá trị phù hợp
        } else if (sum < target) { // Nếu tổng nhỏ hơn target
            left++; // Di chuyển con trỏ trái sang phải
        } else { // Nếu tổng lớn hơn target
            right--; // Di chuyển con trỏ phải sang trái
        }
    }
    return false;
}

int main() {
    int n, target;
    printf("Nhập số lượng phần tử của mảng: ");
    scanf("%d", &n);

    int arr[n]; // Khởi tạo mảng có n phần tử
    printf("Nhập các phần tử của mảng (cách nhau bởi dấu cách): ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    // Nhập giá trị target
    printf("Nhập giá trị cần tìm tổng (target): ");
    scanf("%d", &target);

    if (twoSum(arr, n, target)) {
        printf("true\n"); // Tìm thấy cặp giá trị phù hợp
    } else {
        printf("false\n"); // Không tìm thấy cặp giá trị phù hợp
    }
    return 0;
}
