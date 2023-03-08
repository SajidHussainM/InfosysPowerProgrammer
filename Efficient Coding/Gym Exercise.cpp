/*

Problem Statement
read_more
Today you decided to go to the gym. You currently have E energy. There are N exercises in the gym. Each of these exercises drains Ai amount of energy from your body. You feel tired if your energy reaches 0 or below.

Calculate the minimum number of exercises you have to perform such that you become tired. Every unique exercise can only be performed at most 2 times as others also have to use the machines.

If performing all the exercises does not make you feel tired, return -1.

Input format:

E :: INTEGER

The first line contains an integer, E, denoting the Energy.

N :: INTEGER

The next line contains an integer, N, denoting the number of exercises.

A :: INTEGER ARRAY

Each line i of the N subsequent lines (where 0 ≤ i < N) contains an integer describing the amount of energy drained by ith exercise.

Constraints:

1 ≤ E ≥ 10^5

1 ≤ N ≥ 10^5

1 ≤ A[i] ≥  10^5

Sample Input	Sample Output	Explanation
6
2
1
2	4	E = 6 Do 1st exercise 2 times Do 2nd exercise 2 times Hence, total exercise done 4.
10
2
1
2	-1	E = 10 By doing both the exercises 2 times you won't feel tired.
2
3
1
5
2	1	E = 2 Use 3rd exercise 1 time. Hence, total exercise done 1.
Languages: C#,Python 3,Java,C++,C,Scala,Go,Perl,Bash,Plain JavaScript,TypeScript,R,PHP,Ruby,Python,Clojure


*/






#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int e,  n;
    cin>>e>>n;
    
    vector<int> a(n);
    
    for(int i=0; i<n; i++) cin>>a[i];
    
    sort(a.begin(), a.end(), greater<int> ());
    int i , c = 0;
    for( i=0; i<n; i++){
        
        if(e - (2 * a[i]) >= 0)
            e -= (2 * a[i]), c += 2;
        
        else 
             e -= a[i] , c++;
            
        
        if(e <=0 ) break;
    }
    
    if(e > 0) cout<< "-1"<<endl;
    
    else cout<< c<<endl;
    return 0;
}


//2nd Approach


#include <iostream>

using namespace std;

int exercise(int arr[], int test, int energy){
    
    //check if some input == energy , if yess then return 1.
    for(int i =0; i<test; i++){
        if(arr[i] == energy){
            return 1;
        }
    }
    int sum =0;
    int ans =0;
    int ans1=0;
    for(int i=0; i<test; i++){ sum = sum + arr[i]; if(sum >=energy){
            ans = i+1;
            return ans;
        }
    }
    sum =0;
    for(int i =0; i<test; i++){ sum = sum + arr[i]; if(2*sum >= energy){
            ans1 = 2*(i+1);
            return ans1;
        }
    }
    return -1;
    
    
    
}
int main()
{
 int energy ;
 cin>>energy;
 int test;
 cin>>test;
  
  int arr[test];
  for(int i =0; i<test; i++){ cin>> arr[i];
  }
  
 int ans = exercise(arr, test, energy);
 cout << ans;
  
}
