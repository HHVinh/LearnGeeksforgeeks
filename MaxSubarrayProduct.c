#include <stdio.h>
int maxProductSubarray(int arr[], int n) {
    // Khởi tạo max_prod và min_prod với giá trị của phần tử đầu tiên
    int max_prod = arr[0];  // Tích con lớn nhất
    int min_prod = arr[0];  // Tích con nhỏ nhất
    int result = arr[0];    // Kết quả tích con lớn nhất
    // Lặp qua mảng bắt đầu từ phần tử thứ 2 (chỉ số 1)
    for (int i = 1; i < n; i++) {
        // Nếu arr[i] là số âm, đổi chỗ giữa max_prod và min_prod 
        // vì số âm có thể thay đổi dấu
        if (arr[i] < 0) {
            int temp = max_prod;
            max_prod = min_prod;
            min_prod = temp;
        }
        // Cập nhật max_prod:
        // max_prod có thể là: arr[i] (khởi tạo lại từ phần tử hiện tại) 
        // hoặc max_prod * arr[i] (nối thêm phần tử arr[i] vào mảng con hiện tại)
        max_prod = (arr[i] > max_prod * arr[i]) ? arr[i] : max_prod * arr[i];
        // Cập nhật min_prod:
        // min_prod có thể là: arr[i] (khởi tạo lại từ phần tử hiện tại)
        // hoặc min_prod * arr[i] (nối thêm phần tử arr[i] vào mảng con hiện tại)
        min_prod = (arr[i] < min_prod * arr[i]) ? arr[i] : min_prod * arr[i];
        // Cập nhật kết quả (result) nếu max_prod lớn hơn kết quả hiện tại
        result = (max_prod > result) ? max_prod : result;
    }
    // Trả về kết quả cuối cùng
    return result;
}

int main() {
    // Khai báo mảng arr và yêu cầu người dùng nhập giá trị mảng
    int n;
    printf("Nhap so luong phan tu cua mang: ");
    scanf("%d", &n);  // Nhập số lượng phần tử của mảng

    int arr[n];  // Mảng đầu vào

    // Yêu cầu người dùng nhập các phần tử mảng
    printf("Nhap cac phan tu cua mang: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);  // Nhập từng phần tử vào mảng
    }

    // Gọi hàm tính tích con lớn nhất và in kết quả
    printf("Tich con lon nhat la: %d\n", maxProductSubarray(arr, n));

    return 0;
}
