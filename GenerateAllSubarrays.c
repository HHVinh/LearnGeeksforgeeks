#include <stdio.h>
int generateAllSubarrays(int arr[], int n) {
    // Duyệt qua tất cả các chỉ số bắt đầu
    for (int i = 0; i < n; i++) {
        // Duyệt qua tất cả các chỉ số kết thúc cho subarray từ i đến j
        for (int j = i; j < n; j++) {
            // In ra subarray từ i đến j
            for (int k = i; k <= j; k++) {
                printf("%d ", arr[k]);
            }
            printf("\n"); // In dòng mới sau mỗi subarray
        }
    }
    return 0;
}
int main() {
    int n;
    printf("Nhập số lượng phần tử của mảng: ");
    scanf("%d", &n);
    int arr[n];
    // Yêu cầu nhập các phần tử của mảng
    printf("Nhập các phần tử của mảng: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Các subarray của mảng là:\n");
    generateAllSubarrays(arr, n);
    return 0;
}
