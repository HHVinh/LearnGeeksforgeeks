#include <stdio.h>

float simpleInterest(float p, float t, float r) {
    float ans = (p * t * r) / 100;
    return ans;
}

int main() {
    float p, t, r;
    printf("Nhập các hệ số p, t, r cách nhau bởi khoảng trắng: ");
    scanf("%f %f %f", &p, &t, &r);
    printf("%.2f", simpleInterest(p, r, t));
    return 0;
}
