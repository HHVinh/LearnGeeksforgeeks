#include <stdio.h>
int LCM(int a, int b){
    int max, min, res = 0, count = 1;
    // Nếu a bằng b thì LCM là a (hoặc b)
    if(a == b) {
        res = a;
        return res;
    }
    if(a > b){
        min = b;
        max = a;
    }
    else{
        min = a;
        max = b;
    }
    while(count<= max){
        res = min * count;
        if(res % max == 0){
            break;
        } else {
            count++;
        }
    }
    return res;
}

int main() {
    int a, b;
    printf("Nhập a và b: ");
    scanf("%d %d", &a, &b);

    // Gọi hàm tính LCM và in kết quả
    int res = LCM(a, b);
    printf("LCM nhỏ nhất của %d và %d là: %d\n", a, b, res);

    return 0;
}
