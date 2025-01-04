#include <stdio.h>

int subtractOne(int x){
    int m = 1;  // Biến m dùng để kiểm tra các bit từ phải qua trái
    // Lật tất cả các bit là 0 cho đến khi gặp một bit là 1
    while (!(x & m)) {
        x = x ^ m;  // Lật bit tại vị trí m nếu bit đó là 0
        m <<= 1;    // Dịch m sang trái để kiểm tra bit tiếp theo
    }
    // Khi gặp bit 1 đầu tiên, lật nó thành 0
    x = x ^ m;  // Lật bit 1 đầu tiên từ phải sang trái thành 0

    return x;   // Trả về kết quả
}
int main(){
    int num;
    printf("Nhập số cần trừ 1: ");
    scanf("%d", &num);  // Nhập giá trị vào biến num

    // Gọi hàm subtractOne và in kết quả
    printf("Số sau khi trừ 1 là: %d\n", subtractOne(num)); 

    return 0;
}
