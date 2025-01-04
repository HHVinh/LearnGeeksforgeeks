#include <stdio.h>
int dayofweek(int d, int m, int y)
{
    // Mảng chứa số ngày đầu tháng của các tháng (tháng 1 đến tháng 12) theo chỉ số tháng bắt đầu từ 0
    static int t[] = { 0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4 };
    // Nếu tháng là tháng 1 hoặc tháng 2, giảm năm đi 1 vì theo quy tắc của thuật toán Zeller
    y -= m < 3;
    // Công thức tính ngày trong tuần
    return (y + y / 4 - y / 100 + y / 400 + t[m - 1] + d) % 7;
}

// Hàm kiểm tra ngày hợp lệ và tính thứ ngày
int main()
{
    int d, m, y;

    // Nhập ngày tháng năm từ người dùng
    printf("Nhập ngày (d/m/y): ");
    scanf("%d/%d/%d", &d, &m, &y);

    // Kiểm tra ngày nhập có hợp lệ không
    // Mảng này chứa số ngày của các tháng trong năm, với chỉ số bắt đầu từ 0 (tháng 1 có chỉ số 0, tháng 2 có chỉ số 1, ...)
    int daysInMonth[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

    // Nếu tháng là tháng 2, kiểm tra năm nhuận (năm chia hết cho 4 nhưng không chia hết cho 100, trừ khi chia hết cho 400)
    if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0)) {
        daysInMonth[1] = 29; // Tháng 2 có 29 ngày nếu là năm nhuận
    }

    // Kiểm tra tính hợp lệ của ngày nhập: ngày phải nằm trong khoảng từ 1 đến số ngày của tháng
    if (m < 1 || m > 12 || d < 1 || d > daysInMonth[m - 1]) { // `m - 1` để truy xuất đúng chỉ số trong mảng
        printf("Ngày tháng không hợp lệ!\n");
        return 1; // Kết thúc chương trình nếu ngày tháng không hợp lệ
    }

    // Tính thứ của ngày đã nhập
    int day = dayofweek(d, m, y);

    // In ra thứ của ngày
    printf("Ngày %d/%d/%d là thứ %d\n", d, m, y, day);

    return 0;
}
