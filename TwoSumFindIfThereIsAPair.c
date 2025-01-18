#include <stdio.h>
#include <stdlib.h>

// Hàm kiểm tra xem có cặp nào có tổng bằng target không
int twoSum(int arr[], int n, int target) {
    // Khởi tạo một set (mảng đánh dấu) để lưu trữ các phần tử đã gặp
    int *s = (int *)calloc(100000, sizeof(int));  // Giới hạn set trong phạm vi 100000

    // Duyệt qua từng phần tử trong mảng
    for (int i = 0; i < n; i++) {
        int complement = target - arr[i];

        // Kiểm tra xem phần tử bổ sung đã tồn tại trong set chưa
        if (s[complement] == 1) {
            free(s);  // Giải phóng bộ nhớ trước khi trả về
            return 1;  // Nếu có cặp hợp lệ, trả về 1 (true)
        }

        // Đánh dấu phần tử hiện tại trong set
        s[arr[i]] = 1;
    }

    // Giải phóng bộ nhớ nếu không tìm thấy cặp hợp lệ
    free(s);
    return 0;  // Không có cặp hợp lệ, trả về 0 (false)
}

int main() {
    int n, target;

    // Nhập số lượng phần tử của mảng
    printf("Nhập số lượng phần tử của mảng: ");
    scanf("%d", &n);

    int arr[n];

    // Nhập các phần tử của mảng
    printf("Nhập các phần tử của mảng (cách nhau bởi dấu cách): ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Nhập giá trị mục tiêu
    printf("Nhập giá trị target: ");
    scanf("%d", &target);

    // Gọi hàm twoSum và in kết quả
    if (twoSum(arr, n, target)) {
        printf("true\n");
    } else {
        printf("false\n");
    }

    return 0;
}
