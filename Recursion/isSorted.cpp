// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

bool isSorted(int *arr, int n){
    if(n==0 || n==1)
        return true;
    
    if(arr[0]>arr[1])
        return false;
    
    else{
        bool remaining=isSorted(arr+1,n-1);
        return remaining;
        
    }
}

int main() {
    // Write C++ code here
    int n=5;
    int arr[n]={2,5,7,9,0};
    bool sorted=isSorted(arr,n);
    cout<<sorted;
    return 0;
}
