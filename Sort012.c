#include <stdio.h>

void Sort012(int arr[], int n){
    for(int i = 0; i <n - 1; i++){
        for(int j = i+1; j < n; j ++){
            if(arr[i] > arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main(){
    int n;
    printf("Hãy nhập số lượng phần tử của danh sách: ");
    scanf("%d",&n);

    int arr[n];
    printf("Hãy nhập %d phần tử chứa các số 0 - 1 - 2 cách nhau bởi dấu khoảng trắng: ",n);
    for(int i = 0; i<n; i++){
        scanf("%d",&arr[i]);
    }

    printf("Kết quả là: ");
    Sort012(arr,n);
    for(int i = 0; i<n; i++){
        printf("%d ",arr[i]);
    }

    return 0;
}