#include <stdio.h>
#include <math.h>
#define PI 3.14159265358979323846

float findArea(float r) {
    return (PI * r * r);
}

int main() {
    float r, area;
    printf("Hãy nhập độ dài của đường kính hình tròn: ");
    scanf("%f",&r);
    area = findArea(r);
    printf("%.5f\n", area);
    return 0;
}