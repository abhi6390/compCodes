#include <bits/stdc++.h>
using namespace std;

bool checkPal(string &str, int i, int j) {
    //cout<<str<<endl;
    if(i>j)
        return true;
    if(str[i]!=str[j])
        return false;
        
    else
       return checkPal(str,i+1,j-1);
    
}

int main() {
    // Write C++ code here
    string str="hhryyf";
    bool isPal=checkPal(str,0,str.size()-1);
    cout<<(isPal? "Palindrome" : "Not a palindrome")<<endl;

    return 0;
}
