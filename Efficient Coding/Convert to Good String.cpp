/*

Jon is very fond of strings. (Or so he thinks!) But, he does not like strings which have same consecutive letters. No one has any idea why it is so. He calls these strings as Bad strings. So, Good strings are the strings which do not have same consecutive letters. Now, the problem is quite simple. Given a string S, you need to convert it into a Good String.

You simply need to perform one operation - if there are two same consecutive letters, delete one of them.

Input:
The first line contains an integer T, denoting the number of test cases.
The next T lines contains the test cases consisting of a string S, which consists of only lower case letters.

Output:
For each test case, print the answer to the given problem.

Constraints:
1 <= T <= 10
1 <= |S| <= 30

*/


#include <iostream>
using namespace std;

string solve(string s){
    int n = s.size();
    string t;
    
    int i = 0;
    
    while(i<n){
        int j = i + 1;
        while(s[j] == s[i]) j++;
        t.push_back(s[i]);
        
        i = j;
    }
    
    return t;
    
}

int main() {
    //for input use:
    //String inputString;
    //cin>>inputString;
    
    int t;
    cin>>t;
    
    while(t--){
        string s;
        cin>>s;
        
        cout<<solve(s)<<endl;
    }
    
    
    return 0;
}
