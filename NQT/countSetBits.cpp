#include <iostream>
using namespace std;

int countSetBits(int n) {
    int count = 0;
    while (n > 0) {
        count += (n & 1);  // Check the least significant bit
        n >>= 1;           // Right-shift the number by 1
    }
    return count;
}

int main() {
    int n = 11;
    cout << "Number of set bits in " << n << " is: " << countSetBits(n) << endl;
    return 0;
}
