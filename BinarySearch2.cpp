// C++ code to show how to use the binary_search()
// for searching an element in the given range
#include <bits/stdc++.h>
using namespace std;

// Function for check an element whether it
// is present or not
void isPresent(vector<int> &arr, int val) {
  
    // using binary_search to check if val exists
    if (binary_search(arr.begin(), arr.end(), val))
        cout << val << " exists in vector";
    else
        cout << val << " does not exist";

    cout << endl;
}

int main() {
    vector<int> arr = {10, 15, 20, 25, 30, 35};

    int val1 = 15;
    int val2 = 23;

    isPresent(arr, val1);
    isPresent(arr, val2);

    return 0;
}