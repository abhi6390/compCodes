// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

long long findCube(long long n, long long m)
{
    if(n>m) return 0;
    
    long long cubeSum=0;
    for(long long i=n; i<m;i++){
        cubeSum+=i*i*i;
    }
    
    return cubeSum;
}

int main() {
    // Write C++ code here
    long long n=2;
    long long m=4;
    long long sum=findCube(n,m);
    cout<<sum;
    return 0;
}
