#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
bool checkPower(int x, int y) {
    if (x == 0) return (y == 0);  // 0^k = 0 với k > 0, nhưng không có 0^0
    if (x == -1) return (y == 1 || y == -1);  // -1^k = 1 với mọi k chẵn và =-1 với mọi k lẻ
    if (y == 1) return true;  // x^0 = 1 với mọi x
    if (x > 0 && y < 0) return false;  // Không thể có lũy thừa dương bằng số âm
    if (x < 0) {
        int sum = 1;
        while ((y < 0 && abs(sum) < abs(y)) || (y > 0 && sum < y)){
            sum *= x;
            if (sum == y) return true;  // Kiểm tra nếu sum đã bằng y
        }
        return false;  // Nếu không tìm thấy lũy thừa phù hợp, trả về false
    }
    // Nếu x là số dương
    int sum = 1;
    while (sum < y) {
        sum *= x;
    }
    return (sum == y);
}

int main() {
    int x, y;
    printf("Hãy nhập hai số x và y bất kì cách nhau khoảng trắng: ");
    scanf("%d %d", &x, &y);
    if (checkPower(x, y)) {
        printf("True\n");
    } else {
        printf("False\n");
    }

    return 0;
}
