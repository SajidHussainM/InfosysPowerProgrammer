/*

Students of Inter Public School love sweets. They prefer eating sweets all the time. To make sure they remain happy their Math teacher Daniel decided to get sweets for them. But since they are students of a Public School they are not so easily pleased.

A student would become happy if there are at least X sweets in the class and not more than Y sweets because they know too much of sweets could lead to diabetes. The teacher wants to buy the minimum number of sweets so that maximum number of students are happy in his class.

Help him in finding out these values.

Print the minimum number of sweets and the maximum number of students who are happy separated by space

Input:

The first line contains N indicating the number of students in the class

This is followed up by N lines where every line contains two integers X and Y respectively

Read the inputs from the standard input stream

Constraints:

1 ≤ N ≤ 10^5
1 ≤ X ≤ Y ≤ 10^9
Output:

Print the output to the standard output stream

Sample Input	Sample Output	Explanation
6
3 6
1 6
7 11
2 15
5 8
1 2	5 4	Here if the teacher buys :
1 chocolate, students 2 and 6 will be happy
2 chocolates , students 2, 4 and 6 will be happy
3 chocolates, students 1, 2 and 4 will be happy
4 chocolates, students 1, 2, and 4 will be happy
5 chocolates, students 1, 2, 4 and 5 will be happy
6 chocolates, students 1, 2, 4 and 5 will be happy
7 chocolates, students 3,4 and 5 will be happy
Any more chocolates will reduce the number of students who will be happy. The maximum number of students who will be happy is 4 when the teacher buys 5 or 6 chocolates. Hence the minimum number of chocolates that the teacher has to buy is 5 in order to keep the maximum number of students happy, i.e. 4.


*/






#include <iostream>
#include <map>
using namespace std;

int main() {
    int N, l, r, nsweets = 0, nstudents = 0, sum = 0;
    map<int, int> A;
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> l >> r;
        A[l]++;
        A[r+1]--;
    }
    
    for(auto it : A) cout<<it.first<<" "<<it.second<<endl;
    
    for (auto it = A.begin(); it != A.end(); it++) {
        sum += it->second;
        if (sum > nstudents) {
            nsweets = it->first;
            nstudents = sum;
        }
    }
    cout << nsweets << " " << nstudents << endl;
    return 0;
}
