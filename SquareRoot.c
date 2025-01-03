#include <stdio.h>

int squareRoot(int n){
    int num = 1;
    while(num * num <= n){
        num += 1;
    }
    return num - 1;
}

int main(){
    int n;
    printf("Nhập n: ");
    scanf("%d",&n);
    
    int res = squareRoot(n);
    printf("Căn bậc 2 của %d là: %d",n,res);
    return 0;
}

