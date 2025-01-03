#include <stdio.h>

int factorialNumber(int n){
    int factorial = 1;
    if(n == 0) return factorial;
    for(int i = 1; i <= n; i++){
        factorial *= i;
    }
    return factorial;
}

int main(){
    int n;
    printf("Hãy nhập một số nguyên dương bất kì: ");
    scanf("%d",&n);

    int result = factorialNumber(n);
    printf("Giai thừa của %d là: %d",n,result);

    return 0;
}