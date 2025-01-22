#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// Hàm so sánh để sử dụng với qsort
int compare(const void *a, const void *b) {
    return (*(char *)a - *(char *)b);  // So sánh hai ký tự
}
// Hàm sắp xếp chuỗi theo thứ tự bảng chữ cái
void sortString(char *str) {
    int n = strlen(str);  // Tính độ dài chuỗi
    qsort(str, n, sizeof(char), compare);  // Gọi hàm qsort để sắp xếp chuỗi
    printf("Chuỗi sau khi sắp xếp: %s\n", str);  // In chuỗi đã sắp xếp
}
// Hàm chính
int main() {
    char s[100];  // Mảng để lưu chuỗi nhập vào từ người dùng
    // Yêu cầu người dùng nhập chuỗi
    printf("Nhập một chuỗi ký tự (tối đa 99 ký tự): ");
    fgets(s, sizeof(s), stdin);  // Đọc chuỗi từ người dùng
    s[strcspn(s, "\n")] = '\0';  // Loại bỏ ký tự xuống dòng nếu có

    // Kiểm tra nếu chuỗi không rỗng
    if (strlen(s) > 0) {
        sortString(s);  // Gọi hàm để sắp xếp chuỗi
    } else {
        printf("Chuỗi rỗng! Vui lòng nhập chuỗi hợp lệ.\n");
    }
    return 0;
}


