#include <stdio.h>
// Hàm đệ quy tìm giá trị lớn nhất trong mảng từ vị trí i
int findMax(int arr[], int size, int i) {
    // Nếu đã đến phần tử cuối cùng, trả về phần tử đó
    if (i == size - 1) {return arr[i];}
    // Gọi đệ quy để tìm giá trị lớn nhất trong phần còn lại của mảng
    int recMax = findMax(arr, size, i + 1);
    // So sánh giá trị lớn nhất từ đệ quy với phần tử tại vị trí i
    return (recMax > arr[i]) ? recMax : arr[i];
}
// Hàm tìm phần tử lớn nhất trong mảng
int largest(int arr[], int size) {
    return findMax(arr, size, 0); // Gọi hàm findMax bắt đầu từ vị trí 0
}
int main() {
    int size;
    printf("Nhập số lượng phần tử của mảng: ");
    scanf("%d", &size);
    int arr[size];
    // Yêu cầu người dùng nhập từng phần tử của mảng
    printf("Nhập các phần tử của mảng:\n");
    for (int i = 0; i < size; i++) {
        printf("Phần tử thứ %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    // Tìm và in ra phần tử lớn nhất
    printf("Phần tử lớn nhất trong mảng là: %d\n", largest(arr, size));
    return 0;
}
