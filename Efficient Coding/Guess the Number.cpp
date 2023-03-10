

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int k, n;
    cin >> k >> n;
    
    int guess_count = ceil(log2(n+1));
    cout << guess_count << endl;
    
    return 0;
}

