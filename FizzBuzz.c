#include <stdio.h>
int fizzBuzz(int n) {
    for (int i = 1; i <= n; i++) {
        int printFizzBuzz = 0;  // Biến đánh dấu nếu số i chia hết cho 3 hoặc 5
        if (i % 3 == 0) {
            printf("Fizz");  // In ra "Fizz" nếu chia hết cho 3
            printFizzBuzz = 1;  // Đánh dấu là đã in "Fizz"
        }
        if (i % 5 == 0) {
            printf("Buzz");  // In ra "Buzz" nếu chia hết cho 5
            printFizzBuzz = 1;  // Đánh dấu là đã in "Buzz"
        }
        if (!printFizzBuzz) {  // Nếu không chia hết cho 3 và 5
            printf("%d", i);  // In ra số i
        } 
        printf(" ");  // In dấu cách sau mỗi phần tử
    }
    return 0;  // Trả về 0 để kết thúc hàm fizzBuzz
}
int main() {
    int n;
    printf("Nhập số n: "); scanf("%d", &n);
    if (n <= 0) {
        printf("Số n phải lớn hơn 0!\n");  // Thông báo nếu nhập sai
        return 1;  // Dừng chương trình nếu n không hợp lệ
    }
    fizzBuzz(n);  // Gọi hàm fizzBuzz với tham số n
    return 0;
}
