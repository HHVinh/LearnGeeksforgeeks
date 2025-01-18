#include <stdio.h>

void tachSo0VaSo1(int mang[], int kichThuoc) {
    int viTriDau = 0;      // Chỉ số bắt đầu
    int viTriCuoi = kichThuoc - 1; // Chỉ số kết thúc

    while (viTriDau < viTriCuoi) {
        if (mang[viTriDau] == 1) {
            if (mang[viTriCuoi] != 1) {
                // Hoán đổi giá trị
                int tam = mang[viTriDau];
                mang[viTriDau] = mang[viTriCuoi];
                mang[viTriCuoi] = tam;
                viTriDau++;
                viTriCuoi--;
            } else {
                viTriCuoi--;
            }
        } else {
            viTriDau++;
        }
    }
}

int main() {
    int kichThuoc;
    printf("Nhập kích thước của mảng: ");
    scanf("%d", &kichThuoc);

    if (kichThuoc <= 0) {
        printf("Kích thước mảng phải lớn hơn 0.\n");
        return 1;
    }
    int mang[kichThuoc];
    printf("Nhập các phần tử của mảng (chỉ chứa 0 và 1): ");
    for (int i = 0; i < kichThuoc; i++) {
        scanf("%d", &mang[i]);
        // Kiểm tra giá trị hợp lệ
        if (mang[i] != 0 && mang[i] != 1) {
            printf("Mảng chỉ được chứa các số 0 và 1.\n");
            return 1;
        }
    }
    tachSo0VaSo1(mang, kichThuoc);
    printf("Mảng sau khi tách: ");
    for (int i = 0; i < kichThuoc; i++) {
        printf("%d ", mang[i]);
    }
    printf("\n");

    return 0;
}
