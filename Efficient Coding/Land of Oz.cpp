/*


Problem Statement
read_more
You have travelled to Land of Oz with five cities (C1,C2,C3,C4,C5). The only mode of transport in this kingdom is the train.

One can travel from C1to C2 in one minute. This train can occupy at most A people.
One can travel from C2to C3 in one minute. This train can occupy at most B people.
One can travel from C3to C4 in one minute. This train can occupy at most C people.
One can travel from C4to C5 in one minute. This train can occupy at most D people.
For each of them, a train leaves the city at each integer time (0,1,2,...).

There is a group of N people at C1, and they all want to go to C5.

At least how long does it take for all of them to reach there? You can ignore the time needed to transfer.

Input format:

The first line contains an integer T denoting the number of test cases.
The first line of each test case contains a single integer N.
The second line of each test case contains four space-separated integers A,B,C, and D respectively.
Constraints:

1 ≤ T ≤ 100000
1 ≤ N,A,B,C,D ≤ 1000000000
 

Output format:

For each test case, print the minimum time required for all of the people to reach C5 (in minutes) in a new line.

 

Sample Input	Sample Output	Explanation
2
2
4 2 2 1
2
2 2 4 4	5
4	For the first test case, it will take in total 5 minutes to reach C5. In the first three minutes, 2 people will non-stop travel to C4 from C1. Since only 1 person can travel at a time from C4 to C5. Thus, total travel time is 5 minutes. For the first test case, it will take in total 4 minutes to reach C5, since 2 people can non-stop travel from C1 to C5.


*/


#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(4);
       
        for(int i=0; i<4; i++) cin>>a[i];
       
        int ti = 4;
       
        int minval = *min_element(a. begin(), a. end());
       
        ti += ceil((n - minval) / (double) minval);
       
       
        cout<<ti<<endl;
         
    }
   
    return 0;
}
