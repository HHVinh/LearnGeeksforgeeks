#include <stdio.h>
#include <string.h>
#define MAX_CHAR 26  // Số lượng ký tự trong bảng chữ cái tiếng Anh (a-z)
// Hàm sắp xếp chuỗi theo thứ tự bảng chữ cái
void sortString(char s[]) {
    int charCount[MAX_CHAR] = {0};  // Mảng đếm số lần xuất hiện của mỗi ký tự (a-z)
    // Duyệt qua chuỗi và đếm số lần xuất hiện của từng ký tự
    for (int i = 0; i < strlen(s); i++) {
        // Kiểm tra xem ký tự có phải là chữ cái thường hay không
        if (s[i] >= 'a' && s[i] <= 'z') {
            charCount[s[i] - 'a']++;  // Tăng số lần xuất hiện của ký tự trong mảng
        }
    }
    // Duyệt qua mảng charCount và in ra các ký tự theo thứ tự bảng chữ cái
    for (int i = 0; i < MAX_CHAR; i++) {
        // In ra ký tự 'a' + i theo số lần xuất hiện
        for (int j = 0; j < charCount[i]; j++) {
            printf("%c", 'a' + i);
        }
    }
}
int main() {
    char s[100];  // Mảng để lưu chuỗi nhập vào
    // Yêu cầu người dùng nhập chuỗi
    printf("Nhập chuỗi gồm các ký tự thường (a-z): ");
    fgets(s, sizeof(s), stdin);  // Đọc chuỗi từ người dùng
    // Loại bỏ ký tự newline nếu có
    s[strcspn(s, "\n")] = '\0';
    // Kiểm tra chuỗi hợp lệ (chỉ chứa ký tự thường)
    int isValid = 1;
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] < 'a' || s[i] > 'z') {  // Kiểm tra ký tự không phải chữ cái thường
            isValid = 0;
            break;
        }
    }
    // Nếu chuỗi hợp lệ, gọi hàm sắp xếp và in kết quả
    if (isValid) {
        printf("Chuỗi sau khi sắp xếp: ");
        sortString(s);  // Gọi hàm sắp xếp chuỗi
        printf("\n");
    } else {
        // Thông báo nếu chuỗi chứa ký tự không hợp lệ
        printf("Chuỗi chỉ được chứa các ký tự thường (a-z).\n");
    }
    return 0;
}
