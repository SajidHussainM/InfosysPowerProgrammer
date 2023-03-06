/*


Problem Statement
read_more
Given a number 
�
. In one operation, you can either increase the value of 
�
 by 1 or decrease the value of 
�
 by 1.

Determine the minimum number of operations required (possibly zero) to convert number 
�
 to a number 
�
 such that binary representation of 
�
 is a palindrome.

Note: A binary representation is said to be a palindrome if it reads the same from left-right and right-left.

Input format:

The first line contains an integer 
�
 denoting the number of test cases.
For each test case, the first line contains an integer 
�
.
Constraints:

1 ≤ T ≤ 105
0 ≤ N ≤ 2*109 
Output format:

For each test case in a new line, print the minimum number of operations required. 

Sample Input	Sample Output	Explanation
2
6
9	1
0	For first test case If we decrease the value of N by 1. Then N = 5, whose binary representation is 101 which is a palindrome. Hence, minimum 1 operation is required. For second test case N = 9, has binary representation 1001 which is a palindrome. Hence, 0 operations is required.
3
10
7
13	1
0
2	For first test case If we decrease the value of N by 1. Then N = 9, whose binary representation is 1001 which is a palindrome. Hence, minimum 1 operation is required. For second test case N = 7, has binary representation 111 which is a palindrome. Hence, 0 operations is required. For third test case N = 13 If we increase the value of N by 2. Then N = 15, whose binary representation is 1111 which is a palindrome. Hence, minimum 2 operation is required.



*/



#include <bits/stdc++.h>
using namespace std;


class binary{
    public:
    
    bool palindrome(int n){
     
        string s = bitset<32>(n).to_string(); // convert to binary string with leading zeros
        
        if(s.find('1') != -1)
         s = s.substr(s.find('1'));
        
        
        //cout<<s<<endl;
        int st = 0 , e = s.length() - 1;
        
        while(st < e){
            if(s[st] != s[e]) return false;
            st++;
            e--;
        }
        
        return true;
    }
     int binaryPalindrome(int n){
         int operations = 0;
         
         while(true){
             if(palindrome(n + operations) || palindrome(n - operations) )
                 return operations;
             
             operations++;
         }
       //return operations;
     }
};

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
         binary obj;
        
        
        cout<<obj.binaryPalindrome(n)<<endl;
             
         
        
         
    }
    return 0;
}
