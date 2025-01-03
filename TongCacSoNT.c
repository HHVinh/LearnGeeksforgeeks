#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool soNguyenTo(int n){
    if(n<2) return false;
    else{
        for(int i = 2;i <= sqrt(n); i++){
            if(n % i == 0) return false;
        } return true;
    }
}
int TongCacSoNT(int n){
    int sum = 0;

    for(int i = 2; i < n; i++){
        if(soNguyenTo(i)){
            printf("\nCác số nguyên tố là: %d",i);
            sum += i;
        }
    }
    return sum;
}

int main(){
    int n;
    printf("Hãy nhập số bất kì: ");
    scanf("%d", &n);

    if (n <= 1) {
        printf("\nKhông có số nguyên tố nào nhỏ hơn %d.", n);
    } else {
        int result = TongCacSoNT(n);
        printf("\n\nTổng các số nguyên tố nhỏ hơn %d là: %d", n, result);
    }

    return 0;
}