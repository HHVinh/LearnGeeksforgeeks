//#include <bits/stdc++.h> là thư viện chuẩn để sử dụng các hàm trong C++ như lower_bound, vector
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
// Hàm kiểm tra xem một phần tử có tồn tại trong vector hay không
void isPresent(vector<int> &arr, int val) {
    // Sử dụng binary_search để kiểm tra sự tồn tại của phần tử val
    if (binary_search(arr.begin(), arr.end(), val)) // Nếu val tồn tại trong vector
        cout << val << " tồn tại trong vector"; 
    else // Nếu val không tồn tại
        cout << val << " không tồn tại trong vector";
    cout << endl; // Xuống dòng sau khi in kết quả
}

int main() {
    // Khởi tạo một vector với các phần tử đã được sắp xếp
    vector<int> arr = {10, 15, 20, 25, 30, 35};
    // Các giá trị cần kiểm tra
    int val1 = 15;
    int val2 = 23;
    // Gọi hàm kiểm tra sự tồn tại của val1 và val2
    isPresent(arr, val1); // Kiểm tra val1
    isPresent(arr, val2); // Kiểm tra val2
    return 0; // Kết thúc chương trình
}
