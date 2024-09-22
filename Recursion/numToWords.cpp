// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

void sayDigit(long long n, string arr[]){
    if(n==0)
        return ;
    
    long long digit=n%10;
    n/=10;
    
    sayDigit(n,arr);
    
    cout<<arr[digit]<<" ";
}

int main() {
    // Write C++ code here
    long long n;
    cin>>n;
    string arr[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    cout<<endl<<endl;
    sayDigit(n, arr);
    cout<<endl<<endl;
    return 0;
}
