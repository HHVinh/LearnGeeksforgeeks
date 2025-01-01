#include <stdio.h>
void sort(int arr[], int n){
    for(int i = 0; i < n - 1; i++){
        for(int j = i+1; j < n; j++)
            if(arr[i] > arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
        }
    }
}
int arithmeticProgression(int arr[], int n){
    if (n < 2) {
        return 0;
    }
    sort(arr,n);
    int d = arr[1] - arr[0];
    if( d == 0){
        return 0;
    }
    else{
        for(int i = 0; i< n-1; i++){
            if(arr[i+1] - arr[i] != d){
                return 0;
            }
        }
        return 1;
    }
}


int main(){
    int n;
    printf("Hãy nhập số lượng phần tử của mảng: ");
    scanf("%d", &n);

    int arr[n];
    printf("Hãy nhập %d phần tử của mảng cách nhau bởi khoảng trắng: ",n);
    for(int i = 0; i<n; i++){
        scanf("%d",&arr[i]);
    }

    sort(arr,n);
    printf("Mảng sau khi sắp xếp là: ");
    for(int i = 0; i<n; i++){
        printf("%d ", arr[i]);
    }

    int result = arithmeticProgression(arr, n);
    printf("\nMảng có phải là cấp số cộng hay không?\n");
    if(result == 1){
        printf("Yes");
    } else{
        printf("No");
    }

    return 0;
}