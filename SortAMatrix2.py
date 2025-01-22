import numpy as np
# Hàm sắp xếp toàn bộ ma trận
def sap_xep_ma_tran(ma_tran):
    # Chuyển ma trận thành mảng numpy
    ma_tran_np = np.array(ma_tran)
    # Làm phẳng, sắp xếp, rồi tái cấu trúc
    ma_tran_sap_xep = np.sort(ma_tran_np.flatten()).reshape(ma_tran_np.shape)
    return ma_tran_sap_xep
def main():
    so_hang = int(input("Nhập số hàng của ma trận: "))
    so_cot = int(input("Nhập số cột của ma trận: "))
    # Nhập từng hàng
    ma_tran = []
    print("Nhập các phần tử của ma trận, từng hàng một:")
    for i in range(so_hang):
        hang = list(map(int, input(f"Nhập hàng {i + 1} (gồm {so_cot} phần tử, cách nhau bởi dấu cách): ").split()))
        while len(hang) != so_cot:
            print(f"Vui lòng nhập đúng {so_cot} phần tử!")
            hang = list(map(int, input(f"Nhập lại hàng {i + 1}: ").split()))
        ma_tran.append(hang)
    # Sắp xếp ma trận
    ma_tran_sap_xep = sap_xep_ma_tran(ma_tran)
    # In ma trận sau khi sắp xếp
    print("Ma trận sau khi sắp xếp toàn bộ:")
    for hang in ma_tran_sap_xep:
        print(" ".join(map(str, hang)))
if __name__ == "__main__":
    main()


