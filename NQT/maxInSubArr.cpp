// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

vector<int> solve(vector<int>& arr, int k) {
    vector<int> ans;
    int maxi=-1;
    for(int i =0; i<=arr.size()-k ;i++){
        maxi=arr[i];
        for(int j=i+1;j<i+k;j++){
            maxi=max(arr[j],maxi);
        }
        ans.push_back(maxi);
    }
    return ans;
}

int main() {
    // Write C++ code here
    vector<int> arr={2,4,7,1,6,3};
    int k=3;
    vector<int> ans=solve(arr,k);
    for(auto x: ans)
        cout<<x<<" ";
    return 0;
}
