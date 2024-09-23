#include <bits/stdc++.h>
using namespace std;

void revStr(string &str, int i, int j) {
    if(i>j)
        return ;
    
    swap(str[i],str[j]);
    i++;
    j--;
    
    revStr(str,i,j);
    
}

int main() {
    // Write C++ code here
    string str="abcde";
    revStr(str,0,str.size()-1);
    cout<<"string: "<<str;

    return 0;
}
