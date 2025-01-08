#include <stdio.h>

void reverseArray(int n, int arr[]) {
    // Đảo ngược mảng bằng cách hoán đổi phần tử đối xứng
    for (int i = 0; i < n / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }
    // Hiển thị mảng sau khi đảo ngược
    printf("Mảng sau khi đảo ngược: {");
    for (int i = 0; i < n; i++) {
        if (i == n - 1)
            printf("%d", arr[i]); // Không in dấu phẩy sau phần tử cuối
        else
            printf("%d, ", arr[i]); // In dấu phẩy sau các phần tử khác
    }
    printf("}\n");

}
int main() {
    int n;
    printf("Nhập số lượng phần tử của mảng: ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("Kích thước mảng phải lớn hơn 0.\n");
        return 1; // Thoát chương trình với mã lỗi
    }
    int arr[n];

    // Yêu cầu nhập các phần tử của mảng
    printf("Nhập các phần tử của mảng:\n");
    for (int i = 0; i < n; i++) {
        printf("Phần tử %d: ", i+1);
        scanf("%d", &arr[i]);
    }

    // Gọi hàm đảo ngược mảng
    reverseArray(n, arr);

    return 0; // Thoát chương trình thành công
}
