#include <stdio.h>
void getTwoElements(int arr[], int n) {
    int xor1 = 0;  // Biến lưu kết quả XOR của tất cả các phần tử trong mảng và các số từ 1 đến n
    int set_bit_no;  // Bit khác biệt (set bit) đầu tiên trong xor1
    int x = 0, y = 0;  // Hai biến lưu kết quả là số thiếu và số lặp
    // Tính XOR của tất cả các phần tử trong mảng và các số từ 1 đến n
    for (int i = 0; i < n; i++) {
        xor1 ^= arr[i];       // XOR với các phần tử trong mảng
        xor1 ^= (i + 1);      // XOR với các số từ 1 đến n
    }
    // Tìm bit khác biệt đầu tiên trong xor1 (rightmost set bit)
    set_bit_no = xor1 & ~(xor1 - 1);
    // Phân chia các số thành hai nhóm dựa trên bit khác biệt
    for (int i = 0; i < n; i++) {
        // Xử lý các phần tử trong mảng
        if (arr[i] & set_bit_no) {
            x ^= arr[i];  // Nhóm 1
        } else {
            y ^= arr[i];  // Nhóm 2
        }
        // Xử lý các số từ 1 đến n
        if ((i + 1) & set_bit_no) {
            x ^= (i + 1);  // Nhóm 1
        } else {
            y ^= (i + 1);  // Nhóm 2
        }
    }
    printf("Missing and Repeating (In any order): %d %d\n", x, y);
}

int main() {
    
    int n;
    // Yêu cầu người dùng nhập kích thước của mảng
    printf("Nhập số phần tử trong mảng (n): "); scanf("%d", &n);

    int arr[n];  // Tạo mảng với kích thước n

    // Nhập các phần tử của mảng
    printf("Nhập các phần tử của mảng (cách nhau bởi khoảng trắng): ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    getTwoElements(arr, n);

    return 0;
}
