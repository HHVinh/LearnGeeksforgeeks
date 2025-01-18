def phanLoaiChanLe(mang):
    """
    Hàm phân loại mảng sao cho các số chẵn ở trước và các số lẻ ở sau,
    nhưng vẫn giữ thứ tự ổn định trong mỗi nhóm.
    """
    chiSoChan = 0  # Con trỏ để lưu vị trí số chẵn tiếp theo
    
    for i in range(len(mang)):
        if mang[i] % 2 == 0:  # Nếu phần tử là số chẵn
            # Hoán đổi phần tử hiện tại với phần tử ở vị trí chỉ số chẵn
            mang[chiSoChan], mang[i] = mang[i], mang[chiSoChan]
            chiSoChan += 1  # Tăng vị trí cho số chẵn tiếp theo

if __name__ == "__main__":
    try:
        n = int(input("Nhập số lượng phần tử trong mảng: "))
        mang = []
        for i in range(n):
            phanTu = int(input(f"Nhập phần tử thứ {i + 1}: "))
            mang.append(phanTu)
        
        print("\nMảng ban đầu:", mang)
        
        phanLoaiChanLe(mang)
        
        print("Mảng sau khi phân loại (chẵn trước, lẻ sau):", mang)
    except ValueError:
        print("Vui lòng nhập số nguyên hợp lệ!")
