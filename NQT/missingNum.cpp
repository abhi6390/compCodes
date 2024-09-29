#include <bits/stdc++.h>
using namespace std;

int missing(vector<int>& arr, int n) {
    int num = 0;
    
    // XOR all elements in the array
    for (auto x : arr) {
        num ^= x;
    }
    
    // XOR all numbers from 1 to n
    for (int i = 1; i <= n; ++i) {
        num ^= i;
    }
    
    return num;
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 7};
    int n = arr.size();  // The maximum number in the expected range
    int size=n+1;
    int num = missing(arr, size);
    cout << "Missing: " << num << endl;

    return 0;
}
