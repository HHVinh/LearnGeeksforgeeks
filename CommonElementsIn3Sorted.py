def tim_cac_phan_tu_chung(mang1, mang2, mang3):
    i, j, k = 0, 0, 0
    # Danh sách lưu các phần tử chung
    phan_tu_chung = []
    # Lặp qua ba mảng cho đến khi một trong ba mảng hết phần tử
    while i < len(mang1) and j < len(mang2) and k < len(mang3):
        # Nếu phần tử ở cùng vị trí trong ba mảng là bằng nhau, thêm vào danh sách kết quả
        if mang1[i] == mang2[j] == mang3[k]:
            phan_tu_chung.append(mang1[i])
            i += 1
            j += 1
            k += 1
            # Bỏ qua các phần tử trùng lặp trong mang1, mang2, mang3
            while i < len(mang1) and mang1[i] == mang1[i - 1]:
                i += 1
            while j < len(mang2) and mang2[j] == mang2[j - 1]:
                j += 1
            while k < len(mang3) and mang3[k] == mang3[k - 1]:
                k += 1
        
        elif mang1[i] < mang2[j]:
            i += 1 # Nếu phần tử trong mang1 nhỏ hơn mang2[j] và mang3[k], tăng chỉ số i
        elif mang2[j] < mang3[k]:
            j += 1 # Nếu phần tử trong mang2 nhỏ hơn mang1[i] và mang3[k], tăng chỉ số j
        else:
            k += 1 # Nếu phần tử trong mang3 nhỏ hơn mang1[i] và mang2[j], tăng chỉ số k
    return phan_tu_chung

# Nhập dữ liệu cho ba mảng
def nhap_mang(kich_thuoc):
    mang = list(map(int, input(f"Nhập {kich_thuoc} mảng, các phần tử cách nhau bởi dấu cách: ").split()))
    return mang

def main():
    mang1 = list(map(int, input(f"Nhập mảng 1, các phần tử đã được sắp xếp: ").split()))
    mang2 = list(map(int, input(f"Nhập mảng 2, các phần tử đã được sắp xếp: ").split()))
    mang3 = list(map(int, input(f"Nhập mảng 3, các phần tử đã được sắp xếp: ").split()))


    print("Mảng 1: ", mang1)
    print("Mảng 2: ", mang2)
    print("Mảng 3: ", mang3)
    # Tìm các phần tử chung
    phan_tu_chung = tim_cac_phan_tu_chung(mang1, mang2, mang3)
    # In kết quả
    if phan_tu_chung:
        print("Các phần tử chung giữa ba mảng là:", *phan_tu_chung)
    else:
        print("Không có phần tử chung giữa ba mảng.")

if __name__ == "__main__":
    main()
