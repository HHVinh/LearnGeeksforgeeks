#include <stdio.h>
// Hàm sắp xếp mảng sao cho các phần tử ở vị trí chẵn lớn hơn hoặc bằng các phần tử ở vị trí lẻ
void rearrangeArray(int arr[], int n) {
    // Duyệt qua mảng và điều chỉnh các phần tử sao cho thỏa mãn yêu cầu
    for (int i = 1; i < n; i++) {
        // Nếu chỉ số là chẵn (1-based index), tức là i+1 là số chẵn
        if ((i + 1) % 2 == 0) {
            // Đảm bảo phần tử hiện tại lớn hơn hoặc bằng phần tử trước đó
            if (arr[i] < arr[i - 1]) {
                // Hoán đổi nếu phần tử không thỏa mãn điều kiện
                int temp = arr[i];
                arr[i] = arr[i - 1];
                arr[i - 1] = temp;
            }
        } else {
            // Nếu chỉ số là lẻ (1-based index), tức là i+1 là số lẻ
            // Đảm bảo phần tử hiện tại nhỏ hơn hoặc bằng phần tử trước đó
            if (arr[i] > arr[i - 1]) {
                // Hoán đổi nếu phần tử không thỏa mãn điều kiện
                int temp = arr[i];
                arr[i] = arr[i - 1];
                arr[i - 1] = temp;
            }
        }
    }
}

int main() {
    int n;

    printf("Nhập số lượng phần tử của mảng: ");
    scanf("%d", &n);

    int arr[n];

    printf("Nhập các phần tử của mảng: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    rearrangeArray(arr, n);

    printf("Mảng sau khi thay đổi: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
