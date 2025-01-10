#include <stdio.h>
void findDistinct(int arr[], int n) {
    // Mảng phụ để lưu các phần tử duy nhất
    int distinct[n];
    int k = 0;  // Chỉ số cho mảng distinct

    for (int i = 0; i < n; i++) {
        int isDuplicate = 0;

        // Kiểm tra xem phần tử arr[i] đã có trong mảng distinct chưa
        for (int j = 0; j < k; j++) {
            if (arr[i] == distinct[j]) {
                isDuplicate = 1;  // Đánh dấu phần tử là trùng
                break;
            }
        }
        // Nếu không phải phần tử trùng, thêm vào mảng distinct
        if (!isDuplicate) {
            distinct[k++] = arr[i];
        }
    }

    // In ra các phần tử duy nhất
    printf("Các phần tử duy nhất là:\n");
    for (int i = 0; i < k; i++) {
        printf("%d ", distinct[i]);
    }
    printf("\n");
}

int main() {
    // Nhập mảng từ người dùng
    int n;
    printf("Nhập số lượng phần tử trong mảng: ");
    scanf("%d", &n);

    int arr[n];
    printf("Nhập các phần tử trong mảng: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Gọi hàm tìm các phần tử duy nhất
    findDistinct(arr, n);

    return 0;
}
