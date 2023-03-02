#include <iostream>
#include <cmath>

using namespace std;

// Function to check if a given number is a power of 2
bool isPowerOf2(long long n) {
    return (n & (n - 1)) == 0;
}

// Function to determine the winner of the game
string determineWinner(long long n) {
    string winner = "Ben";
    bool jennyTurn = true;
    while (n > 1) {
        if (isPowerOf2(n)) {
            n /= 2;
        } else {
            n -= pow(2, floor(log2(n)));
        }
        jennyTurn = !jennyTurn;
    }
    if (!jennyTurn) {
        winner = "Jenny";
    }
    return winner;
}

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        long long n;
        cin >> n;
        cout << determineWinner(n) << endl;
    }
    return 0;
}

