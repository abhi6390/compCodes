// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

// brute
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

// optimal
vector<int> optimalSolution(const vector<int>& arr, int k) {
    vector<int> ans;
    // Max heap to store pairs of (element, index)
    priority_queue<pair<int, int>> heap;

    // Push the first 'k' elements into the heap
    for (int i = 0; i < k; ++i) {
        heap.push({arr[i], i});
    }

    // The maximum element of the first window
    ans.push_back(heap.top().first);

    // Process the rest of the elements in the array
    for (int i = k; i < arr.size(); ++i) {
        // Push the current element along with its index into the heap
        heap.push({arr[i], i});

        // Remove elements from the heap that are outside the current window
        while (heap.top().second <= i - k) {
            heap.pop();
        }

        // The maximum element of the current window
        ans.push_back(heap.top().first);
    }

    return ans;
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
