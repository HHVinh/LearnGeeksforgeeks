#include <stdio.h>
#include <limits.h>
void get3largest(int arr[], int n) {
    // Khởi tạo ba giá trị ban đầu bằng INT_MIN (giá trị nhỏ nhất có thể của một int)
    int num1 = INT_MIN, num2 = INT_MIN, num3 = INT_MIN;
    for (int i = 0; i < n; i++) {
        int x = arr[i];
        // Nếu phần tử x lớn hơn num1 (giá trị lớn nhất hiện tại)
        if (x > num1) {
            num3 = num2;    // Cập nhật giá trị num3 thành num2
            num2 = num1;    // Cập nhật giá trị num2 thành num1
            num1 = x;      // Cập nhật num1 thành x (phần tử lớn nhất mới)
        }
        // Nếu x nằm giữa num1 và num2, nhưng không bằng num1
        else if (x > num2 && x != num1) {
            num3 = num2;    // Cập nhật giá trị num3 thành num2
            num2 = x;      // Cập nhật num2 thành x (phần tử lớn thứ 2)
        }
        // Nếu x nằm giữa num2 và num3, nhưng không bằng num2 và num1
        else if (x > num3 && x != num2 && x != num1) {
            num3 = x;      // Cập nhật num3 thành x (phần tử lớn thứ 3)
        }
    }
    if (num1 != INT_MIN) printf("%d ", num1);
    if (num2 != INT_MIN) printf("%d ", num2);
    if (num3 != INT_MIN) printf("%d ", num3);
    printf("\n");
}

int main() {
    int n;
    // Nhập số lượng phần tử của mảng
    printf("Nhập số lượng phần tử trong mảng: ");
    scanf("%d", &n);

    // Khai báo mảng với n phần tử
    int arr[n];

    // Nhập các phần tử cho mảng
    for (int i = 0; i < n; i++) {
        printf("Nhập phần tử thứ %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Gọi hàm get3largest để tìm ba giá trị lớn nhất trong mảng
    get3largest(arr, n);

    return 0;
}
