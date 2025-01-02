#include <stdio.h>
#include <stdbool.h>

bool overlappingRectangles(int l1x, int l1y, int r1x, int r1y, int l2x, int l2y, int r2x, int r2y){
    if (l1x > r2x || l2x > r1x) return false;
    if (l1y < r2y || l2y < r1y) return false;
    // Nếu không thuộc hai trường hợp trên, chúng chồng lên nhau
    return true;
}
int main(){
    int l1x, l1y, r1x, r1y, l2x, l2y, r2x, r2y;

    printf("Hãy nhập tọa độ điểm l1 (góc trên trái) và r1 (góc dưới phải) của HCN thứ 1:\n");
    printf("Tọa độ l1x l1y: "); scanf("%d %d", &l1x, &l1y);
    printf("Tọa độ r1x r1y: "); scanf("%d %d", &r1x, &r1y);

    printf("\nHãy nhập tọa độ điểm l2 (góc trên trái) và r2 (góc dưới phải) của HCN thứ 2:\n");
    printf("Tọa độ l2x l2y: "); scanf("%d %d", &l2x, &l2y);
    printf("Tọa độ r2x r2y: "); scanf("%d %d", &r2x, &r2y);

    if (overlappingRectangles(l1x, l1y, r1x, r1y, l2x, l2y, r2x, r2y)) {
        printf("\nHai hình chữ nhật chồng lên nhau\n");
    } else {
        printf("\nHai hình chữ nhật không chồng lên nhau\n");
    }

    return 0;
}
