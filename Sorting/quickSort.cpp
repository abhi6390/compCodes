#include <bits/stdc++.h>
using namespace std;

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int partition(int arr[], int low, int high) {
    int pivot = arr[low]; //first element
    int count=0;
    for(int i=low; i<=high; i++){
        if(arr[i]<pivot)
            count++;
    }
    //u have to place pivot here
    int pivotIdx= low+count;
    swap(arr[pivotIdx], arr[low]);
    
    int i=low, j=high;
    
    while(i<pivotIdx  && j>pivotIdx){
        while(arr[i]<pivot)
            i++;
            
        while(arr[j]>pivot)
            j--;
        
        
        if(i<pivotIdx  && j>pivotIdx)
            swap(arr[i++],arr[j--]);
    }
    
    return pivotIdx;
    
}

void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);

        quickSort(arr, low, pi - 1);  //Recursively sort elements before partition
        quickSort(arr, pi + 1, high); //Recursively sort elements after partition
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main() {
    int arr[] = {10, 7, 8, 9, 1, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Unsorted array: ";
    printArray(arr, n);

    quickSort(arr, 0, n - 1);

    cout << "Sorted array: ";
    printArray(arr, n);
    return 0;
}
