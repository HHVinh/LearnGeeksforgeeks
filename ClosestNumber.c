#include <stdio.h>
#include <stdlib.h>
int closestNumber(int n, int m) {
    if (n % m == 0) {
        return n;
    } else {
        int value = n / m;
        // Tính số nguyên chia hết nhỏ hơn hoặc bằng n (leftNum)
        int leftNum = m * value;
        // Khai báo biến rightNum cho số nguyên chia hết lớn hơn n
        int rightNum;
        // Nếu leftNum là số dương, tính rightNum lớn hơn leftNum
        if (leftNum > 0) {
            rightNum = m * (value + 1); // Tính rightNum lớn hơn
        } else {
            // Nếu leftNum là số âm, tính rightNum nhỏ hơn leftNum
            rightNum = m * (value - 1); // Tính rightNum nhỏ hơn
        }
        if (abs(n - leftNum) < abs(n - rightNum)) {
            return leftNum; // Nếu leftNum gần n hơn, trả về leftNum
        } else {
            return rightNum; // Nếu rightNum gần n hơn, trả về rightNum
        }
    }
}

int main() {
    int n, m;

    // Nhập hai số nguyên n và m
    printf("Hãy nhập 2 số nguyên bất kì cách nhau bởi khoảng trắng: ");
    scanf("%d %d", &n, &m);

    // Gọi hàm closestNumber để tìm số gần n nhất chia hết cho m
    int result = closestNumber(n, m);

    // In kết quả ra màn hình
    printf("\nSố nguyên gần %d nhất chia hết cho %d là: %d\n", n, m, result);

    return 0;
}
