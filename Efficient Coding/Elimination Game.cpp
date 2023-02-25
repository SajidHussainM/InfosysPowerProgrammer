/*

You have an array arr of all integers in the range [1, n] sorted in a strictly increasing order. Apply the following algorithm on arr:

Starting from left to right, remove the first number and every other number afterward until you reach the end of the array.
Repeat the previous step again, but this time from right to left, remove the rightmost number and every other number from the remaining numbers.
Keep repeating the steps again, alternating left to right and right to left, until a single number remains.
Input Format:

The first line contains an integer, n, denoting the length of arr.

Constraints:

1 ≤ n ≤ 109
Output Format:

Print the last number that remains in the arr.

Sample Input	Sample Output	Explanation
9	6	arr = [1, 2, 3, 4, 5, 6, 7, 8, 9] arr = [2, 4, 6, 8] arr = [2, 6] arr = [6]
1	1	arr = [1]

*/








#include<bits/stdc++.h>
using namespace std;


int lastRemaining(int n) {
    return n == 1 ? 1 : 2 * (1 + n / 2 - lastRemaining(n / 2));
}

int main() {
    int n;
    cin >> n;
    cout<<lastRemaining(n);
    return 0;
}
