#include <stdio.h>
#include <stdbool.h>
#include <math.h>
bool primeNumber(int num) {
    if (num < 2) {
        return false;
    }
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}
int main() {
    int num;
    printf("Hãy nhập một số nguyên bất kì: ");
    scanf("%d", &num);
    if (num < 2) {
        printf("Hãy nhập số nguyên từ 2 trở lên!\n");
    } else {
        if (primeNumber(num)) {
            printf("Yes\n");
        } else {
            printf("No\n");
        }
    }
    return 0;
}
