#include <bits/stdc++.h>
using namespace std;

bool binSearch(int arr[], int s, int e, int k) {
    if(s > e) return false;
    
    int mid = s + (e - s) / 2;
    
    if(arr[mid] == k)
        return true;
    
    if(arr[mid] > k)
        return binSearch(arr, s, mid - 1, k);
    else
        return binSearch(arr, mid + 1, e, k);
}

int main() {
    // Write C++ code here
    int arr[] = {0, 2, 5, 7, 9};  
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 9;
    
    bool found = binSearch(arr, 0, n - 1, key); 
    cout << (found ? "Found" : "Not Found") << endl;

    return 0;
}
