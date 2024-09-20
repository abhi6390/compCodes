//use case
    //small array size

//tc O(n^2) both worst best.
//sc is O(1)
#include <bits/stdc++.h>
using namespace std;

void selectionSort(int arr[], int n)
{
    for(int i=0 ;i<n-1; i++){
        int minIdx=i;
        
        for(int j=i+1; j<n;j++){
            if(arr[minIdx]>arr[j])
                minIdx=j;
        }
        swap(arr[minIdx],arr[i]);
    }
}

void printArr(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main() {
    
    //selection sort
    //suppose, there are rounds, likes boxing
    //so we choose minimum element, suppose ' i '.
    /*  
        64 | 25 | 12 | 22 | 11.
        1. find minimum, here 11, swap 64 and 11 (i=0)
        2. next min element is 12, so swap 25 and 12 (i=1)
        3. next min element is 22, swap 25 and 22 (i=2)
        4. no more swaps required as already sorted, anyway code
            works such that, 25 is swapped by 25, so ntng.
        total rounds = n-1.             
    */
    
    int arr[] = {24, 42, 76, 88, 12, 22};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    printArr(arr,n);
    selectionSort(arr,n);
    printArr(arr,n);
    
    return 0;
}
