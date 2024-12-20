#include <stdio.h>

int missingNumber(int arr[], int n){
    // Tổng từ 1 đến n
    int totalSum = n * (n + 1) / 2;
    
    // Tính tổng các số hiện có
    int currentSum = 0;
    for(int i = 0; i < n - 1; i++){
        currentSum += arr[i];
    }

    // Số bị thiếu
    return totalSum - currentSum;
}

int main(){
    int n;
    printf("Nhập số lượng phần tử của mảng: ");
    scanf("%d", &n);

    // Khai báo mảng với kích thước n-1 (do có một số bị thiếu)
    int arr[n-1];

    printf("Nhập các phần tử của mảng: ");
    for(int i = 0; i < n - 1; i++){
        scanf("%d", &arr[i]);
    }

    // Gọi hàm missingNumber để tìm số bị thiếu
    int result = missingNumber(arr, n);

    if(result == 0){
        printf("Không có số nào bị thiếu!\n");
    } else {
        printf("Số bị thiếu trong mảng là: %d\n", result);
    }

    return 0;
}
