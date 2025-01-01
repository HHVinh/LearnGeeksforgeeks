#include <stdio.h>

void swapTwoNumber(int a, int b){
    
    printf("Số a = %d\nSố b = %d\n", a,b);

    int temp = a; a = b;b = temp;

    printf("\n2 số sau khi hoán đổi:\nSố a = %d\nSố b = %d", a, b);
}

int main(){
    int a; int b;
    printf("Nhập 2 số bất kí cách nhau bởi khoảng trắng: ");
    scanf("\n%d",&a);
    scanf("%d",&b);

    swapTwoNumber(a,b);

    return 0;
}