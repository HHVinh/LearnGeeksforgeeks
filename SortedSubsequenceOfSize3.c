#include <stdio.h>
#include <limits.h>
void find3Numbers(int arr[], int n) {
    if (n < 3) {
        printf("No such triplet found\n");
        return;
    }
    int smaller[n]; // Mảng lưu chỉ số phần tử nhỏ hơn ở bên trái
    int greater[n]; // Mảng lưu chỉ số phần tử lớn hơn ở bên phải
    int min_index = 0; // Chỉ số phần tử nhỏ nhất hiện tại
    smaller[0] = -1; // Không có phần tử nào bên trái phần tử đầu tiên
    // Duyệt từ trái sang phải để tìm phần tử nhỏ hơn
    for (int i = 1; i < n; i++) {
        if (arr[i] <= arr[min_index]) {
            min_index = i;
            smaller[i] = -1;
        } else {
            smaller[i] = min_index;
        }
    }
    int max_index = n - 1; // Chỉ số phần tử lớn nhất hiện tại
    greater[n - 1] = -1; // Không có phần tử nào bên phải phần tử cuối cùng
    // Duyệt từ phải sang trái để tìm phần tử lớn hơn
    for (int i = n - 2; i >= 0; i--) {
        if (arr[i] >= arr[max_index]) {
            max_index = i;
            greater[i] = -1;
        } else {
            greater[i] = max_index;
        }
    }
    // Tìm phần tử có cả phần tử nhỏ hơn ở bên trái và lớn hơn ở bên phải
    for (int i = 0; i < n; i++) {
        if (smaller[i] != -1 && greater[i] != -1) {
            printf("Triplet: %d, %d, %d\n", arr[smaller[i]], arr[i], arr[greater[i]]);
            return;
        }
    }
    printf("No such triplet found\n");
}

int main() {
    int n;
    // Nhập kích thước mảng
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    // Nhập các phần tử mảng
    printf("Enter the array elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    find3Numbers(arr, n);
    return 0;
}
