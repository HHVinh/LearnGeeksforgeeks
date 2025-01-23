#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
// Cấu trúc để lưu thông tin của từng phần tử
typedef struct {
    int value;     // Giá trị phần tử
    int frequency; // Số lần xuất hiện (tần suất)
    int index;     // Vị trí đầu tiên xuất hiện trong mảng gốc
} Element;
// Hàm so sánh để sử dụng với `qsort`
int compare(const void *a, const void *b) {
    Element *e1 = (Element *)a;
    Element *e2 = (Element *)b;
    // So sánh tần suất (tần suất giảm dần)
    if (e1->frequency != e2->frequency) {
        return e2->frequency - e1->frequency; // Tần suất giảm dần
    }
    // Nếu tần suất bằng nhau, sắp xếp theo thứ tự xuất hiện ban đầu
    return e1->index - e2->index;
}
// Hàm sắp xếp mảng theo tần suất
void sortByFrequency(int arr[], int n) {
    // Bước 1: Dùng một hash table (mảng phụ) để đếm tần suất
    int hash[200000] = {0}; // Hash table để đếm tần suất, tăng kích thước để chứa giá trị âm
    int firstIndex[200000]; // Lưu chỉ số xuất hiện đầu tiên của mỗi phần tử
    for (int i = 0; i < 200000; i++) {
        firstIndex[i] = -1; // Khởi tạo vị trí đầu tiên là -1 (chưa xuất hiện)
    }
    // Duyệt qua mảng và đếm tần suất
    for (int i = 0; i < n; i++) {
        int key = arr[i];
        key += 100000;  // Chuyển giá trị âm thành chỉ số dương (offset 100000)
        hash[key]++;
        if (firstIndex[key] == -1) {
            firstIndex[key] = i; // Lưu chỉ số xuất hiện đầu tiên
        }
    }
    // Bước 2: Lưu thông tin vào mảng `elements` để chuẩn bị sắp xếp
    Element elements[n];
    int count = 0; // Số lượng phần tử khác nhau trong mảng
    for (int i = 0; i < n; i++) {
        int key = arr[i];
        key += 100000;  // Chuyển giá trị âm thành chỉ số dương (offset 100000)
        if (hash[key] > 0) { // Nếu phần tử này đã được đếm
            elements[count].value = arr[i];  // Lưu giá trị gốc
            elements[count].frequency = hash[key];
            elements[count].index = firstIndex[key];
            hash[key] = 0; // Đánh dấu là đã xử lý xong
            count++;
        }
    }
    // Bước 3: Sắp xếp mảng `elements` theo tần suất và chỉ số xuất hiện
    qsort(elements, count, sizeof(Element), compare);
    // Bước 4: Tạo lại mảng kết quả từ mảng `elements`
    int idx = 0;
    for (int i = 0; i < count; i++) {
        for (int j = 0; j < elements[i].frequency; j++) {
            arr[idx++] = elements[i].value;
        }
    }
}
int main() {
    int arr1[] = {2, 5, 2, 8, 5, 6, 8, 8}; // Mảng đầu vào 1
    int n1 = sizeof(arr1) / sizeof(arr1[0]);

    int arr2[] = {2, 5, 2, 6, -1, 999, 5, 8, 8, 8}; // Mảng đầu vào 2
    int n2 = sizeof(arr2) / sizeof(arr2[0]);

    printf("Input array 1: ");
    for (int i = 0; i < n1; i++) printf("%d ", arr1[i]); printf("\n");
    sortByFrequency(arr1, n1);
    printf("Sorted array 1: ");
    for (int i = 0; i < n1; i++) printf("%d ", arr1[i]); printf("\n");
    printf("Input array 2: ");
    for (int i = 0; i < n2; i++) printf("%d ", arr2[i]); printf("\n");
    sortByFrequency(arr2, n2);
    printf("Sorted array 2: ");
    for (int i = 0; i < n2; i++) printf("%d ", arr2[i]); printf("\n");
    return 0;
}


