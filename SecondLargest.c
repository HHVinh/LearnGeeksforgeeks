#include <stdio.h>

int getSecondLargest(int arr[], int n){
    
    int maxNum = 0; int secondLargesr = 0;
    for(int i = 0; i< n; i++){
        if(arr[i] > maxNum){
            secondLargesr = maxNum;
            maxNum = arr[i];
        } else if(arr[i] > secondLargesr && arr[i] < maxNum){
            secondLargesr = arr[i];
        }
    }
    if(secondLargesr == 0){
        return -1;
    } else {
        return secondLargesr;
    }

}

int main(){

    int n;
    printf("Nhập số lượng phần tử của danh sách: ");
    scanf("%d", &n);
    if( n < 2){
        printf("Hãy nhập danh sách có nhiều hơn 2 phần tử");
    } else {
        int arr[n];
        printf("Nhập dãy số cách nhau bởi khoảng trắng: ");
        for(int i = 0; i <n; i++){
            scanf("%d", &arr[i]);
        }
        int result = getSecondLargest(arr,n);
        printf("Số lớn thứ 2 của danh sách là: %d", result);
    }

    return 0;
}