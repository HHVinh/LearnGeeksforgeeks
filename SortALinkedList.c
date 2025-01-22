#include <stdio.h>
#include <stdlib.h>
// Định nghĩa cấu trúc Node cho danh sách liên kết
struct Node {
    int data;
    struct Node* next;
};
// Hàm chia danh sách liên kết thành 2 nửa
struct Node* split(struct Node* head) {
    struct Node* fast = head;
    struct Node* slow = head;
    // Di chuyển con trỏ fast 2 bước và slow 1 bước cho đến khi fast đến cuối
    while (fast != NULL && fast->next != NULL) {
        fast = fast->next->next;
        if (fast != NULL) {
            slow = slow->next;
        }
    }
    // Chia danh sách tại vị trí slow
    struct Node* temp = slow->next;
    slow->next = NULL;
    return temp;
}
// Hàm hợp nhất 2 danh sách liên kết đã được sắp xếp
struct Node* merge(struct Node* first, struct Node* second) {
    // Nếu một trong hai danh sách rỗng, trả về danh sách còn lại
    if (first == NULL) return second;
    if (second == NULL) return first;
    // So sánh các giá trị tại các nút của hai danh sách
    if (first->data < second->data) {
        // Gọi đệ quy hợp nhất phần còn lại của danh sách
        first->next = merge(first->next, second);
        return first;
    } else {
        second->next = merge(first, second->next);
        return second;
    }
}
// Hàm Merge Sort đệ quy trên danh sách liên kết
struct Node* MergeSort(struct Node* head) {
    // Trường hợp cơ bản: nếu danh sách rỗng hoặc chỉ có 1 phần tử, không cần sắp xếp
    if (head == NULL || head->next == NULL) {
        return head;
    }
    // Chia danh sách thành 2 nửa
    struct Node* second = split(head);
    // Đệ quy sắp xếp từng nửa
    head = MergeSort(head);
    second = MergeSort(second);
    // Hợp nhất 2 nửa đã được sắp xếp
    return merge(head, second);
}
// Hàm in danh sách liên kết
void printList(struct Node* head) {
    struct Node* curr = head;
    while (curr != NULL) {
        printf("%d ", curr->data);
        curr = curr->next;
    }
    printf("\n");
}
// Hàm tạo một Node mới
struct Node* createNode(int x) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = x;
    newNode->next = NULL;
    return newNode;
}
int main() {
    int n;
    printf("Nhập số lượng phần tử trong danh sách liên kết: ");
    scanf("%d", &n);
    struct Node* head = NULL;
    struct Node* tail = NULL;
    // Nhập dữ liệu cho danh sách liên kết
    printf("Nhập các phần tử của danh sách:\n");
    for (int i = 0; i < n; i++) {
        int data;
        printf("Phần tử %d: ", i + 1);
        scanf("%d", &data);
        struct Node* newNode = createNode(data);
        // Nếu là phần tử đầu tiên, gán làm đầu danh sách
        if (head == NULL) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }
    // Sắp xếp danh sách liên kết
    head = MergeSort(head);
    // In kết quả danh sách đã sắp xếp
    printf("Danh sách sau khi sắp xếp: ");
    printList(head);
    return 0;
}
