class Node:
    def __init__(self, x):
        self.data = x  # Dữ liệu của nút
        self.next = None  # Con trỏ tiếp theo (ban đầu là None)

# Hàm chia danh sách liên kết thành 2 nửa
def split(head):
    fast = head
    slow = head
    # Di chuyển con trỏ fast 2 bước và slow 1 bước cho đến khi fast đến cuối
    while fast and fast.next:
        fast = fast.next.next  # Di chuyển fast 2 bước
        if fast:  # Nếu fast không phải None, di chuyển slow 1 bước
            slow = slow.next
    # Chia danh sách tại vị trí của slow
    second = slow.next
    slow.next = None  # Tách danh sách thành 2 nửa
    return second

# Hàm hợp nhất 2 danh sách đã được sắp xếp
def merge(first, second):
    # Nếu một trong hai danh sách rỗng, trả về danh sách còn lại
    if not first:
        return second
    if not second:
        return first
    # So sánh các giá trị tại các nút của hai danh sách
    if first.data < second.data:
        first.next = merge(first.next, second)  # Gọi đệ quy để hợp nhất tiếp
        return first
    else:
        second.next = merge(first, second.next)  # Gọi đệ quy để hợp nhất tiếp
        return second

# Hàm Merge Sort đệ quy trên danh sách liên kết
def merge_sort(head):
    # Trường hợp cơ bản: nếu danh sách rỗng hoặc chỉ có 1 phần tử, không cần sắp xếp
    if not head or not head.next:
        return head
    # Chia danh sách thành 2 nửa
    second = split(head)
    # Đệ quy sắp xếp từng nửa
    head = merge_sort(head)
    second = merge_sort(second)
    # Hợp nhất 2 nửa đã được sắp xếp
    return merge(head, second)

# Hàm in danh sách liên kết
def print_list(head):
    curr = head
    while curr:
        print(curr.data, end=" ")  # In ra dữ liệu của mỗi nút
        curr = curr.next
    print()  # In xuống dòng

if __name__ == "__main__":
    n = int(input("Nhập số lượng phần tử trong danh sách liên kết: "))
    head = None
    tail = None
    # Nhập dữ liệu cho danh sách liên kết
    print("Nhập các phần tử của danh sách:")
    for i in range(n):
        data = int(input(f"Phần tử {i + 1}: "))
        new_node = Node(data)

        # Nếu là phần tử đầu tiên, gán làm đầu danh sách
        if head is None:
            head = new_node
            tail = new_node
        else:
            tail.next = new_node  # Liên kết phần tử vào cuối danh sách
            tail = new_node  # Cập nhật con trỏ tail

    # Sắp xếp danh sách liên kết
    head = merge_sort(head)
    
    # In kết quả danh sách đã sắp xếp
    print("Danh sách sau khi sắp xếp:")
    print_list(head)

