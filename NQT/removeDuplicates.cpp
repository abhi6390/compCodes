// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

void duplicate(map<string,int> &mpp, bool reverse=false){
    vector<string> temp;
    
    for(auto &i: mpp)
        temp.push_back(i.first);
    
    if(reverse)
        sort(temp.rbegin(),temp.rend());
    else
        sort(temp.begin(),temp.end());
    
    for(auto keys: temp)
        cout<<keys<<" ";
    
    
    cout<<endl;    
          
}

int main() {
    // Initialize the map with some string keys and integer values
    map<string, int> mpp;
    mpp["apple"] = 2;
    mpp["watermelon"] = 1;
    mpp["banana"] = 3;
    mpp["orange"] = 4;

    // Print the keys in ascending order
    cout << "Ascending order: ";
    duplicate(mpp);

    // Print the keys in descending order
    cout << "Descending order: ";
    duplicate(mpp, true);

    return 0;
}


/*

int main() {
    // Create an empty map to store string keys and integer values
    map<string, int> mpp;
    
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;  // Number of elements to insert
    
    cout << "Enter the elements (key value):" << endl;
    for (int i = 0; i < n; ++i) {
        string key;
        int value;
        cin >> key >> value;  // Take input for key and value pair
        mpp[key] = value;     // Insert the key-value pair into the map
    }
    
    // Print the keys in ascending order
    cout << "Ascending order: ";
    duplicate(mpp);

    // Print the keys in descending order
    cout << "Descending order: ";
    duplicate(mpp, true);

    return 0;
}







*/
