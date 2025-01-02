#include <stdio.h>
#include <string.h>

int sumOfDigits(char *s) {
    int n = strlen(s);
    int sum = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] >= '0' && s[i] <= '9') { // Kiểm tra nếu là chữ số
            int digit = s[i] - '0';
            sum += digit;
        }
    }
    return sum;
}

int main() {
    char s[100]; // Cấp phát mảng tĩnh đủ lớn
    printf("Hãy nhập một số bất kì: ");
    scanf("%s", s); // Đọc chuỗi

    int result = sumOfDigits(s);
    printf("\nTổng các chữ số của số %s là: %d\n", s, result);

    return 0;
}
