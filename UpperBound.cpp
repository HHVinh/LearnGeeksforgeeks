//#include <bits/stdc++.h> là thư viện chuẩn để sử dụng các hàm trong C++ như lower_bound, vector
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    // Khởi tạo ba vector với các giá trị mẫu
    vector<int> arr1 = {10, 15, 20, 25, 30, 35};  // Vector thứ nhất
    vector<int> arr2 = {10, 15, 20, 20, 25, 30, 35};  // Vector thứ hai (có giá trị trùng lặp)
    vector<int> arr3 = {10, 15, 25, 30, 35};  // Vector thứ ba (không có giá trị 20)
    int val = 20;  // Giá trị cần tìm kiếm
    // Sử dụng hàm upper_bound() để kiểm tra vị trí của giá trị trong arr1
    // upper_bound(arr1.begin(), arr1.end(), val) trả về iterator đến vị trí đầu tiên 
    // mà có giá trị > val. Nếu val có trong arr1, upper_bound trả về iterator đến 
    // vị trí của phần tử đầu tiên có giá trị > 20, tức là vị trí thứ 3 (giá trị 25).
    // Sau đó trừ đi arr1.begin() để lấy chỉ số index.
    cout << upper_bound(arr1.begin(), arr1.end(), val) - arr1.begin(); cout << endl;
    // Sử dụng upper_bound() để kiểm tra vị trí của giá trị trong arr2
    // Trong arr2, giá trị 20 xuất hiện hai lần. upper_bound sẽ trả về iterator đến vị trí
    // đầu tiên có giá trị > 20, tức là tại vị trí thứ 4 (vị trí của giá trị 25).
    cout << upper_bound(arr2.begin(), arr2.end(), val) - arr2.begin(); cout << endl;
    // Sử dụng upper_bound() để kiểm tra vị trí của giá trị trong arr3
    // Trong arr3, không có giá trị 20. upper_bound sẽ trả về iterator đến vị trí
    // của phần tử đầu tiên có giá trị lớn hơn 20 (tại vị trí thứ 2, giá trị 25).
    cout << upper_bound(arr3.begin(), arr3.end(), val) - arr3.begin(); cout << endl;
    return 0;
}
