#include <stdio.h>
#include <stdbool.h>
#include <math.h>

// Hàm kiểm tra số hoàn hảo
bool perfectNumber(int n){
    int sum = 0; // Vì 1 luôn là ước các mọi số n
    // Tìm các ước số của n (ngoại trừ chính nó)
    for(int i = 1; i <= n / 2; i++){
        if(n % i == 0){
            printf("%d ", i);
            sum += i;
        }
    }
    return sum == n;
}
int main() {
    int n;
    printf("Nhập n: ");
    scanf("%d", &n);

    if(perfectNumber(n)) {
        printf("\nTrue");
    } else {
        printf("\nFalse");
    }
    return 0;
}
