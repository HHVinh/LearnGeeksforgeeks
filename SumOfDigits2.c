#include <stdio.h>
#include <string.h>

int sumOfDigits(int num) {
    
    int sum = 0;
    while(num > 0){
        sum += num % 10;
        num /= 10; 
    }
    
    return sum;
}

int main() {
    int num;
    printf("Hãy nhập một số bất kì: ");
    scanf("%d", &num);

    int result = sumOfDigits(num);
    printf("\nTổng các chữ số của số %d là: %d\n", num, result);

    return 0;
}
