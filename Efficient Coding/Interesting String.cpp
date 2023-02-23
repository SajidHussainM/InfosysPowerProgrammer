/*


ou have an interesting string S of length N. It is interesting because you can rearrange the characters of this string in any order. You want to cut this string into some contiguous pieces such that after cutting, all the pieces are equal to one another.

You can't rearrange the characters in the cut pieces or join the pieces together. You want to make the number of pieces as large as possible. What is the maximum number of pieces you can get?

Note: You can observe that you may not want to cut the string at all, therefore the number of pieces is 1. Hence, the answer always exists.

Input Format: 

The first line contains a string, S, denoting the string.

Constraints:

1 ≤ Len(S) ≤  2*105
Output Format:

Print the number of maximum pieces such that after cutting String S, all the pieces are equal to one another.

Sample Input	Sample Output	Explanation
zzzzz	5	You can cut it into 5 pieces "z" + "z" + "z" + "z" + "z"
abccdcabacda	2	Rearrange the string as "dcbaca" + "dcbaca", the answer is 2.


*/








#include <iostream>
#include <string>
#include <unordered_map>
#include <climits>

using namespace std;

int ans(const string& s) {
    unordered_map<char, int> map;
    for (int i = 0; i < s.length(); i++) {
        char c = s[i];
        map[c]++;
    }

    int minVal = INT_MAX;
    for (auto it : map) {
        minVal = min(minVal, it.second);
    }
    return minVal;
}

int main() {
    string s;
    cin >> s;
    
    cout << ans(s) << endl;
    return 0;
}
