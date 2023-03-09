/*
A number is called elegant if it consists of 
2
�
 digits and the sum of the first 
�
 digits is equal to the sum of the last 
�
 digits. Your task is to find the count of beautiful numbers in the interval from 
�
 to 
�
 (including 
�
 and 
�
).

Elegant numbers do not have leading zeroes.

Input format:

The first line contains an integer 
�
 denoting the number of test cases.
The first line of each test case contains two space-separated integers 
�
 and 
�
 denoting the range interval 
[
�
,
�
]
.
Constraints:

1≤ T≤ 200000
1≤ L ≤R ≤ 1000000000
 

Output format:

For each test case, print the count of elegant numbers in a new line.
 

Sample Input	Sample Output	Explanation
1
1 100	9	There are only 9 elegant numbers in the first 100 integers. 11, 22, 33, 44, 55, 66, 77, 88 and 99 are the elegant numbers in the range [1,100] .

*/



#include <iostream>

using namespace std;

bool isElegant(int n) {
    if (n < 10 || n > 99) return false;
    int a = n / 10;
    int b = n % 10;
    return (a + b) % 2 == 0 && (a + b) / 2 == a;
}

int countElegant(int L, int R) {
    int count = 0;
    for (int i = L; i <= R; i++) {
        if (isElegant(i)) count++;
    }
    return count;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int L, R;
        cin >> L >> R;
        cout << countElegant(L, R) << endl;
    }
    return 0;
}
