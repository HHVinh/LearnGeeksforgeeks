#include <stdio.h>

void arrayLeaders(int arr[], int n, int result[], int *count){
    *count = 0;
    for(int i = 0; i <n; i++){
        int isLeader = 1;
        for(int j = i+1; j <n; j++){
            if(arr[i] < arr[j]){
                isLeader = 0;
                break;
            }
        }
        if(isLeader){
            result[*count] = arr[i];
            (*count) ++;
        }
    }
}

int main(){

    int n;
    printf("Hãy nhập số lượng phần tử của mảng: ");
    scanf("%d", &n);

    int arr[n];
    printf("Hãy nhập các phần tử của mảng cách nhau bởi dấu khoảng trắng: ");
    for(int i = 0; i <n; i++){
        scanf("%d",&arr[i]);
    }

    int result[n]; // Mảng để lưu các phần tử leader
    int count;     // Số lượng phần tử leader
    arrayLeaders(arr, n, result, &count);

    printf("Các phần tử leader trong mảng là: ");
    for (int i = 0; i < count; i++) {
        printf("%d ", result[i]);
    }
    printf("\n");

    return 0;
}
