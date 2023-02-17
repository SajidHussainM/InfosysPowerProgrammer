/*

You are given a number N. You have to find the minimum number of operations required to reach N from 0. You have two valid operations available:

Double the number
Add one to the number
Input Format:

A natural number 

Output Format:

Print the total number of operations involved to reach 0

Sample Input

Sample Output

Explanation 

8

4

If the number is divisible by 2 , reduce the number to half else reduce it by one unit and also increase the count by one unit as when one operation is performed

 
 
 */


//Here sometimes going from front doestn't work so we go from n


int get_min_count(int n){
    int count = 0
    while(n!=0):
        if(n%2 == 0):
            n = n/2
        else:
            n -= 1
        count += 1
    return count
              
  }

print(get_min_count(8))
