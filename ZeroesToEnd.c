#include <stdio.h>
void zeroesToEnd(int arr[], int n){
    int count = 0; // Biến để theo dõi vị trí trong mảng temp[]
    int temp[n];    // Mảng tạm lưu các giá trị không phải 0

    // Duyệt qua mảng arr[] để sao chép các phần tử khác 0 vào mảng temp[]
    for(int i = 0; i < n; i++){
        if(arr[i] != 0) {  // Nếu phần tử không phải 0
            temp[count++] = arr[i]; // Sao chép vào temp[] và tăng count
        }
    }

    // Điền các số 0 vào các vị trí còn lại trong temp[]
    while(count < n)
        temp[count++] = 0;

    // Sao chép lại mảng temp[] vào mảng arr[]
    for(int i = 0; i < n; i++)
        arr[i] = temp[i];
}

// Hàm để in mảng arr[]
void printArray(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main(){
    // Nhập số lượng phần tử mảng
    int n;
    printf("Nhập số lượng phần tử: ");
    scanf("%d", &n);

    // Khai báo mảng arr[] và nhập các phần tử từ bàn phím
    int arr[n];
    for(int i = 0; i < n; i++) {
        printf("Nhập phần tử %d: ", i+1);
        scanf("%d", &arr[i]);
    }

    // Gọi hàm di chuyển tất cả các số 0 vào cuối mảng
    zeroesToEnd(arr, n);

    // In kết quả mảng sau khi đã di chuyển các số 0 vào cuối
    printf("Mảng sau khi di chuyển các số 0 vào cuối: ");
    printArray(arr, n);

    return 0;
}
