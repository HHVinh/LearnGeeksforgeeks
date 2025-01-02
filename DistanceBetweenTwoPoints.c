#include <stdio.h>
#include <math.h>

float distanceBetweenTwoPoint(float x1, float y1, float x2, float y2){
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

int main() {
    float x1, y1, x2, y2;
    printf("Hãy nhập lần lượt 4 tọa độ x1 y1 x2 y2: ");
    scanf("%f %f %f %f", &x1, &y1, &x2, &y2);
    
    printf("Khoảng cách giữa hai điểm là: %.5f\n", distanceBetweenTwoPoint(x1, y1, x2, y2));
    
    return 0;
}
