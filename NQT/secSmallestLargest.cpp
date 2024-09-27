#include<bits/stdc++.h>

using namespace std;

int secGreatest(int arr[], int n)
{
    int largest = arr[0], secLargest = -1;
    for(int i = 1 ; i<n;i++){
        if(arr[i]>largest){
            secLargest=largest;
            largest=arr[i];
        }
        else if(arr[i]>secLargest && arr[i]!=largest){
            secLargest=arr[i];
        }
    }
    return secLargest;
    
}

int secSmallest(int arr[], int n)
{
    if (n < 2)
        return -1;

    int smallest = arr[0], secSmallest = INT_MAX;

    for (int i = 1; i < n; i++) {
        if (arr[i] < smallest) {
            secSmallest = smallest;
            smallest = arr[i];
        } else if (arr[i] < secSmallest && arr[i] != smallest) {
            secSmallest = arr[i];
        }
    }

    
    if (secSmallest == INT_MAX)
        return -1;  

    return secSmallest;
}


int main() {
    int arr[]={1,2,3,4,5};
    int n =5;
    int secondLargest=secGreatest(arr,n);
    int secondSmallest=secSmallest(arr,n);
    
    cout<<"Second largest is : "<<secondLargest<<endl;
    cout<<"Second smallest is : "<<secondSmallest<<endl;

    return 0;
}
