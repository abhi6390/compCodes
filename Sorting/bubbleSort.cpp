#include <bits/stdc++.h>
using namespace std;

void printArr(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void bubbleSort(int arr[], int n)
{
    for(int i=1; i<n;i++){
      for(int j=0;j<n-i;j++){
        if(arr[j]>arr[j+1]){
          swap(arr[j], arr[j+1]);
        }
      }
    }
}

int main() {
    
    
    
    int arr[] = {24, 42, 76, 88, 12, 22};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    printArr(arr,n);
    bubbleSort(arr,n);
    printArr(arr,n);
    
    return 0;
}
