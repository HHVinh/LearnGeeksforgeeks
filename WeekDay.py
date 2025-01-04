def dayofweek(d, m, y):
    # Mảng 't' chứa giá trị cho mỗi tháng trong năm (số tương ứng từ tháng 1 đến tháng 12)
    t = [ 0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4 ]
    
    # Điều chỉnh năm nếu tháng nhỏ hơn 3 (tháng 1 và tháng 2)
    y -= m < 3
    
    # Công thức Zeller's Congruence để tính toán ngày trong tuần
    # (y + int(y / 4) - int(y / 100) + int(y / 400) + t[m - 1] + d) % 7
    return (( y + int(y / 4) - int(y / 100) + int(y / 400) + t[m - 1] + d) % 7)

if __name__ == "__main__":
    # Nhập ngày tháng năm theo định dạng ngày/tháng/năm
    d, m, y = map(int, input("Nhập ngày/tháng/năm (ví dụ: 4/1/2025): ").split("/"))
    
    # Tính toán ngày trong tuần và in kết quả
    day = dayofweek(d, m, y)
    
    # In kết quả: ngày trong tuần
    # 0: Chủ Nhật, 1: Thứ Hai, ..., 6: Thứ Bảy
    days = ["Chủ Nhật", "Thứ Hai", "Thứ Ba", "Thứ Tư", "Thứ Năm", "Thứ Sáu", "Thứ Bảy"]
    print(f"Ngày {d}/{m}/{y} là {days[day]} ({day})")
