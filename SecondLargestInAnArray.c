#include <stdio.h>
#include <limits.h>
// Để sử dụng INT_MIN: là giá trị nhỏ nhất mà kiểu int có thể lưu trữ (thường là -2,147,483,648)

void findSecondLargest(int arr[], int size) {
    if (size < 2) {
        printf("Mảng phải có ít nhất 2 phần tử.\n");
        return;
    }
    
    int max1 = INT_MIN, max2 = INT_MIN;

    for (int i = 0; i < size; i++) {
        if (arr[i] > max1) {
            max2 = max1;
            max1 = arr[i];
        } else if (arr[i] > max2 && arr[i] != max1) {
            max2 = arr[i];
        }
    }

    if (max2 == INT_MIN) {
        printf("Không tồn tại số lớn thứ hai (tất cả các phần tử đều giống nhau).\n");
    } else {
        printf("Số lớn nhất: %d\n", max1);    
        printf("Số lớn thứ hai: %d\n", max2);
    }
}

int main() {
    int size;
    printf("Nhập số lượng phần tử của mảng: ");
    scanf("%d", &size);

    if (size < 2) {
        printf("Mảng phải có ít nhất 2 phần tử.\n");
        return 0;
    }

    int arr[size];
    printf("Nhập các phần tử của mảng: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    findSecondLargest(arr, size);

    return 0;
}
