#include <stdio.h>
#include <stdlib.h>
// Hàm tính tần suất xuất hiện của các phần tử
void printElements(int arr[], int n, int k) {
    int *freq = (int *)malloc(n * sizeof(int)); // Mảng để lưu trữ tần suất của mỗi phần tử
    int i, j;
    // Khởi tạo mảng freq với giá trị 0
    for (i = 0; i < n; i++) {
        freq[i] = -1; // -1 nghĩa là phần tử chưa được đếm
    }
    // Đếm tần suất các phần tử trong mảng
    for (i = 0; i < n; i++) {
        int count = 1; // Khởi tạo đếm phần tử hiện tại
        // Kiểm tra phần tử arr[i] đã được đếm chưa
        if (freq[i] == -1) {
            // Duyệt qua các phần tử tiếp theo để đếm số lần xuất hiện của arr[i]
            for (j = i + 1; j < n; j++) {
                if (arr[i] == arr[j]) {
                    count++;
                    freq[j] = 0; // Đánh dấu phần tử đã được đếm
                }
            }
            // Nếu tần suất lớn hơn n/k, in ra phần tử
            if (count > n / k) {
                printf("%d ", arr[i]);
            }
        }
    }
    free(freq); // Giải phóng bộ nhớ đã cấp phát
}

int main() {
    int n, k;
    // Yêu cầu người dùng nhập mảng và giá trị k
    printf("Nhập số lượng phần tử trong mảng: ");
    scanf("%d", &n);
    int arr[n];
    printf("Nhập các phần tử trong mảng: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Nhập giá trị k: ");
    scanf("%d", &k);
    // Gọi hàm in ra các phần tử có tần suất xuất hiện > n/k
    printf("Các phần tử có tần suất xuất hiện lớn hơn n/k: ");
    printElements(arr, n, k);
    return 0;
}
