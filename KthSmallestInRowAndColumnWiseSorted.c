#include <stdio.h>
#include <stdlib.h>

// Hàm nhập mảng 2 chiều
void nhap_mang(int **arr, int m, int n) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("Nhập phần tử tại [%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
}

// Hàm xuất mảng 2 chiều
void xuat_mang(int **arr, int m, int n) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}
// Hàm tìm phần tử lớn thứ k
int tim_k_lon_nhat(int **arr, int m, int n, int k) {
    // Kiểm tra nếu k lớn hơn tổng số phần tử trong mảng
    if (k > m * n || k <= 0) {
        printf("Giá trị k không hợp lệ! K phải nằm trong khoảng từ 1 đến %d\n", m * n);
        return -1;  // Trả về -1 nếu k không hợp lệ
    }

    // Cấp phát mảng 1 chiều để chứa tất cả phần tử của mảng 2 chiều
    int *flat_arr = (int *)malloc(m * n * sizeof(int));
    int index = 0;

    // Bước 1: Chuyển mảng 2 chiều sang mảng 1 chiều (làm flat mảng)
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            flat_arr[index++] = arr[i][j];  // Sao chép phần tử từ mảng 2 chiều vào mảng 1 chiều
        }
    }

    // Bước 2: Sắp xếp mảng 1 chiều theo thứ tự tăng dần
    for (int i = 0; i < m * n - 1; i++) {
        for (int j = i + 1; j < m * n; j++) {
            if (flat_arr[i] > flat_arr[j]) {  // Nếu phần tử ở vị trí i lớn hơn phần tử ở vị trí j thì đổi chỗ
                int temp = flat_arr[i];
                flat_arr[i] = flat_arr[j];
                flat_arr[j] = temp;
            }
        }
    }

    // Bước 3: Sau khi mảng 1 chiều đã được sắp xếp tăng dần, phần tử nhỏ thứ k sẽ ở vị trí k-1
    int result = flat_arr[k - 1];  // Lấy phần tử nhỏ thứ k (chú ý rằng chỉ số mảng bắt đầu từ 0)
    
    // Giải phóng bộ nhớ sau khi sử dụng
    free(flat_arr);  // Giải phóng bộ nhớ đã cấp phát cho mảng 1 chiều

    return result;  // Trả về phần tử nhỏ thứ k
}

int main() {
    int m, n, k;

    // Nhập số lượng hàng (m) và cột (n) của mảng 2 chiều
    printf("Nhập số lượng hàng (m): ");
    scanf("%d", &m);
    printf("Nhập số lượng cột (n): ");
    scanf("%d", &n);

    // Cấp phát bộ nhớ động cho mảng 2 chiều
    int **arr = (int **)malloc(m * sizeof(int *));
    for (int i = 0; i < m; i++) {
        arr[i] = (int *)malloc(n * sizeof(int));
    }

    // Nhập dữ liệu cho mảng 2 chiều
    nhap_mang(arr, m, n);

    // Xuất mảng ra màn hình
    printf("Mảng 2 chiều vừa nhập là:\n");
    xuat_mang(arr, m, n);

    // Nhập giá trị k (phần tử lớn thứ k)
    printf("Nhập k (phần tử lớn thứ k): ");
    scanf("%d", &k);

    // Tìm phần tử lớn thứ k
    int k_lon_nhat = tim_k_lon_nhat(arr, m, n, k);

    // Nếu phần tử lớn thứ k hợp lệ, in kết quả
    if (k_lon_nhat != -1) {
        printf("Phần tử lớn thứ %d là: %d\n", k, k_lon_nhat);
    }

    // Giải phóng bộ nhớ sau khi sử dụng
    for (int i = 0; i < m; i++) {
        free(arr[i]);
    }
    free(arr);

    return 0;
}

