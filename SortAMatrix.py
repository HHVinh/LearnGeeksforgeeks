# Hàm để sắp xếp toàn bộ ma trận
def sap_xep_ma_tran(ma_tran):
    # Bước 1: Làm phẳng ma trận thành một danh sách
    mang_phang = [phan_tu for hang in ma_tran for phan_tu in hang]

    # Bước 2: Sắp xếp danh sách đã làm phẳng
    mang_phang.sort()

    # Bước 3: Ghi lại giá trị từ danh sách đã sắp xếp vào ma trận
    chi_so = 0
    so_hang = len(ma_tran)
    so_cot = len(ma_tran[0]) if so_hang > 0 else 0
    for i in range(so_hang):
        for j in range(so_cot):
            ma_tran[i][j] = mang_phang[chi_so]
            chi_so += 1

# Hàm để in ma trận
def in_ma_tran(ma_tran):
    for hang in ma_tran:
        print(" ".join(map(str, hang)))

# Hàm chính
def main():
    # Nhập số hàng và cột
    so_hang = int(input("Nhập số hàng của ma trận: "))
    so_cot = int(input("Nhập số cột của ma trận: "))

    # Nhập từng hàng của ma trận
    ma_tran = []
    print("Nhập các phần tử của ma trận, từng hàng một:")
    for i in range(so_hang):
        hang = list(map(int, input(f"Nhập hàng {i + 1} (gồm {so_cot} phần tử, cách nhau bởi dấu cách): ").split()))
        while len(hang) != so_cot:  # Kiểm tra đúng số phần tử trên mỗi hàng
            print(f"Vui lòng nhập đúng {so_cot} phần tử!")
            hang = list(map(int, input(f"Nhập lại hàng {i + 1}: ").split()))
        ma_tran.append(hang)

    # Gọi hàm để sắp xếp toàn bộ ma trận
    sap_xep_ma_tran(ma_tran)

    # In ma trận sau khi sắp xếp
    print("Ma trận sau khi sắp xếp toàn bộ:")
    in_ma_tran(ma_tran)

# Chạy chương trình
if __name__ == "__main__":
    main()
