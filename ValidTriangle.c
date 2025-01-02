#include <stdio.h>
#include <stdbool.h>

bool validTriangle(float a, float b, float c) {
    // Kiểm tra điều kiện bất đẳng thức tam giác
    if (a + b < c || b + c < a || c + a < b) 
        return false;  // Không phải tam giác nếu điều kiện này đúng
    return true;  // Nếu không, ba cạnh là hợp lệ tạo thành tam giác
}

int main() {
    float a, b, c;
    printf("Nhập ba cạnh của tam giác: ");
    scanf("%f %f %f", &a, &b, &c);

    if (validTriangle(a, b, c)) {
        printf("Đây là ba cạnh hợp lệ của tam giác.\n");
    } else {
        printf("Đây không phải là ba cạnh hợp lệ của tam giác.\n");
    }

    return 0;
}
