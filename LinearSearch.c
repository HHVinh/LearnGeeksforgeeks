#include <stdio.h>
int linearSearch(int n, int a, int arr[]) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == a) {
            return i;
        }
    }
    return -1;
}
int main() {
    int n;
    printf("Hãy nhập số lượng phần tử của mảng: "); scanf("%d", &n);
    if (n <= 0) {
        printf("Số lượng phần tử phải lớn hơn 0.\n"); return 0;
    }
    int arr[n];
    for (int i = 0; i < n; i++) {
        printf("Hãy nhập phần tử thứ %d: ", i + 1); scanf("%d", &arr[i]);
    }
    int a;
    printf("\nHãy nhập số muốn tìm vị trí trong mảng trên: "); scanf("%d", &a);
    int result = linearSearch(n, a, arr);
    if (result == -1) {
        printf("Không tìm thấy %d trong mảng.\n", a);
    } else {
        printf("Vị trí của %d trong mảng trên là: %d\n", a, result);
    }
    return 0;
}
