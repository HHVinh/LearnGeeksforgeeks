#include <stdio.h>

int diceProblem(int n){
    return 7 - n;
}

int main(){
    int n;
    printf("Hãy nhập 1 số nguyên bất kì từ 1 đến 6: ");
    scanf("%d", &n);

    if(n <=0 || n >=7){
        printf("Hãy nhập số nguyên từ 1 đến 6!\n");
    }   else{
        int result = diceProblem(n);
        printf("Mặt đối diện của %d là %d\n", n, result);
    }
    return 0;
}
