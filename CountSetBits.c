#include <stdio.h>
int countSetBits(int n) {
    int count = 0;  // Biến đếm số bit 1, khởi tạo bằng 0

    // Duyệt từng bit của n cho đến khi n trở thành 0
    while (n) {
        // Kiểm tra bit phải nhất (LSB) bằng cách thực hiện phép AND với 1
        // Nếu bit phải nhất là 1, kết quả sẽ khác 0 và count sẽ tăng lên 1
        count += n & 1;
        // Dịch n sang phải 1 bit để kiểm tra bit tiếp theo
        n >>= 1;  // n >>= 1 tương đương với n = n / 2
    }
    return count;  // Trả về số bit 1 đã đếm được
}
int main() {
    int n; 
    printf("Nhập số nguyên: ");
    scanf("%d", &n);

    // Gọi hàm countSetBits để đếm số bit 1 trong n
    int result = countSetBits(n);

    // In kết quả
    printf("Số bit 1 trong %d là: %d\n", n, result);

    return 0;  // Trả về 0 khi kết thúc chương trình
}
