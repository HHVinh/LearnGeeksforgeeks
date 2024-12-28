#include <stdio.h>

int equilibriumPoint(int arr[], int n) {
    if (n <= 2) {
        return -1; // Không thể có điểm cân bằng với mảng có 2 phần tử trở xuống
    }

    int total_sum = 0;
    int left_sum = 0;

    // Tính tổng tất cả các phần tử trong mảng
    for (int i = 0; i < n; i++) {
        total_sum += arr[i];
    }

    // Duyệt qua các phần tử để tìm điểm cân bằng
    for (int i = 0; i < n; i++) {
        total_sum -= arr[i];  // Cập nhật tổng phần tử bên phải

        if (left_sum == total_sum) {
            return i + 1;  // Trả về chỉ số điểm cân bằng (1-indexed)
        }

        left_sum += arr[i];  // Cập nhật tổng phần tử bên trái
    }

    return -1;  // Không có điểm cân bằng
}

int main(){
    int n;
    printf("Hãy nhập số lượng phần tử của mảng: ");
    scanf("%d", &n);
    if(n <= 2){
        printf("Hãy nhập số lượng phần tử lớn hơn 2!");
    } else{
        int arr[n];
        printf("Hãy nhập các phần tử của mảng cách nhau bởi khoảng trắng: ");
        for(int i = 0; i<n; i++){
            scanf("%d", &arr[i]);
        }

        int result = equilibriumPoint(arr,n);
        printf("Điểm cân bằng là: %d", result);
    }

    return 0;
}