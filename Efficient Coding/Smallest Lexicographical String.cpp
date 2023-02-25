/*


There are n beads placed in a single line horizontally. One small letter [a-z] is written on each of them.

Find the smallest lexicographical string that can be formed by performing pick-place operation any number of times and print the obtained string

A pick-place operation is described as follows :-

"You are allowed to pick any one of the first K(1<=K<=n-1) beads, and place it at the end of the line."
(For Example :- If K=2, then you are allowed to pick either the first bead or the second bead and place it at the end.)

The string is read starting from the character on the first bead and ending at the character on the last bead.

For example, if S = "anubhaw", then, character 'a' is written on the first bead, character 'n' is written on the second bead, and so on.

Note:

The smallest lexicographical string from a set of strings is the string which will occur first in an English dictionary

Input format:

The first line contains N representing the number of sequences of beads.

Then each of the N lines contain an integer K and a string S separated by space, where each character in the string represents the characters written on the beads in line.

Read the inputs from the standard input stream

Constraints:

1<=N<=10^4

2<=|S|<=10^3

Output format:

Print N lines where each line contains the smallest lexicographical string that can be formed by performing pick-place operations any number of times

Print the output to the standard output stream.

Sample Input	Sample Output	Explanation
2
1 cba
2 abab	acb
aabb	There are two test cases given:
1 cba:
Here K is 1. Hence the first bead with character 'c' on it, is picked and placed at the end of the line. cba -> bac Then performing same pick-place operation gives :- bac -> acb which is the smallest lexicographical string that can be formed
2 baa:
Here K is 2. Hence directly picking the second bead with character 'b' written on it and placing at the end of the line the string becomes abab -> aabb which is the smallest lexicographical string that can be formed



*/


#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    while(n--) {
        string k, s;
        cin >> k >> s;
        
        if(stoi(k) >= 2) {
            sort(s.begin(), s.end());
            cout << s << endl;
        }
        else {
            string ans = s;
            for(int i=1; i<s.length(); i++) {
                string temp = s.substr(i) + s.substr(0, i);
                if(temp < ans)
                    ans = temp;
            }
            cout << ans << endl;
        }
    }
    
    return 0;
}
