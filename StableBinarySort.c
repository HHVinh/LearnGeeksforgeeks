#include <stdio.h>

// Hàm phân loại mảng sao cho số chẵn ở trước, số lẻ ở sau (giữ thứ tự)
void phanLoaiChanLe(int mang[], int n) {
    int chiSoChan = 0; // Chỉ số để lưu vị trí số chẵn tiếp theo

    for (int i = 0; i < n; i++) {
        if (mang[i] % 2 == 0) { // Nếu là số chẵn
            // Hoán đổi phần tử hiện tại với phần tử tại vị trí chiSoChan
            int temp = mang[chiSoChan];
            mang[chiSoChan] = mang[i];
            mang[i] = temp;

            chiSoChan++; // Tăng chỉ số cho số chẵn tiếp theo
        }
    }
}

int main() {
    int n;
    printf("Nhập số lượng phần tử của mảng: ");
    scanf("%d", &n);
    int mang[n];

    printf("Nhập các phần tử của mảng: ");
    for (int i = 0; i < n; i++) {
        printf("Phần tử thứ %d: ", i + 1);
        scanf("%d", &mang[i]);
    }

    printf("\nMảng ban đầu: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", mang[i]);
    }
    printf("\n");

    // Gọi hàm phân loại
    phanLoaiChanLe(mang, n);

    // Hiển thị mảng sau khi phân loại
    printf("Mảng sau khi phân loại (chẵn trước, lẻ sau): ");
    for (int i = 0; i < n; i++) {
        printf("%d ", mang[i]);
    }
    printf("\n");

    return 0;
}
