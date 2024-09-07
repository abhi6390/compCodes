// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

vector<int> maxSub(const vector<int>& arr, int k) {
    vector<int> res;
    for (int i = 0; i <= arr.size() - k; ++i) {
        int maxi = arr[i];
        for (int j = i; j < i + k; ++j) {
            maxi = max(maxi, arr[j]); // Find the maximum in the current window of size k
        }
        res.push_back(maxi); // Append the maximum value to the result
    }
    return res;
}

int main() {
    // Write C++ code here
    vector<int> arr={2,4,7,1,8,3};
    int k=3;
    vector<int>res=maxSub(arr,k);
    for(auto x: res)
        cout<<x<<" ";

    return 0;
}
