#include <stdio.h>

void multiplicationTable(int n){
    for(int i = 1; i <= 10;i++){
        printf("%d x %d = %d\n", n, i, n*i);
    }
}

int main(){
    int n;
    printf("Hãy nhập một số tự nhiên bất kì muốn tạo bảng cửu chương: ");
    scanf("%d", &n);

    printf("Bảng cửu chương %d: \n", n);
    multiplicationTable(n);
    
    return 0; 
}