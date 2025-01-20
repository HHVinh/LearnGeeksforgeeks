#include <stdio.h>
#include <limits.h>
void get3largest(int arr[], int n) {
    int fst = INT_MIN, sec = INT_MIN, thd = INT_MIN;
    // Duyệt qua từng phần tử trong mảng
    for (int i = 0; i < n; i++) {
        int x = arr[i];
        // Nếu phần tử hiện tại lớn hơn số lớn nhất `fst`
        if (x > fst) {
            thd = sec;  // Cập nhật số lớn thứ ba
            sec = fst;  // Cập nhật số lớn thứ hai
            fst = x;    // Cập nhật số lớn nhất
        }
        // Nếu phần tử nằm giữa `fst` và `sec`
        else if (x > sec && x != fst) {
            thd = sec;  // Cập nhật số lớn thứ ba
            sec = x;    // Cập nhật số lớn thứ hai
        }
        // Nếu phần tử nằm giữa `sec` và `thd`
        else if (x > thd && x != sec && x != fst) {
            thd = x;    // Cập nhật số lớn thứ ba
        }
    }
    // In ra ba số lớn nhất, nếu tồn tại
    if (fst != INT_MIN) printf("%d ", fst);
    if (sec != INT_MIN) printf("%d ", sec);
    if (thd != INT_MIN) printf("%d ", thd);
    printf("\n");
}

int main() {

    int n;
    printf("Nhập số lượng phần tử của mảng: ");
    scanf("%d", &n);

    if (n < 3) {
        printf("Mảng phải có ít nhất 3 phần tử.\n");
        return 0;
    }

    int arr[n];
    printf("Nhập các phần tử của mảng: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    get3largest(arr, n);

    return 0;
}
