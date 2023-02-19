/*

Given an array of n integers and a positive number k. We are allowed to take any k integers from the given array. The task is to find the minimum possible value of the difference between maximum and minimum of k numbers.

 

Example 1:

Input:
N=7
K=3
arr[] = {10, 100, 300, 200, 1000, 20, 30}
Output:
20
Explanation:
20 is the minimum possible difference 
between any maximum and minimum of any 
k numbers.Given k = 3, we get the result 
20 by selecting integers {10, 20, 30}.
max(10, 20, 30) - min(10, 20, 30) = 30 - 10 
= 20.
Example 2:

Input:
N=2
K=2
arr[] = { 1,1 }
Output:
0
Explanation:
max({1,1}) - min({1,1}) = 1 - 1 = 0

Your Task:
Since, this is a function problem. You don't need to take any input, as it is already accomplished by the driver code. You just need to complete the function minDiff() that takes array arr, integer N and integer K as parameters and return the value of friendliness for the given array.

 

Expected Time Complexity: O(NLogN).
Expected Auxiliary Space: O(1).

 

Constraints:
2 ≤ N ≤ 105

*/


int minDiff(int arr[], int n, int k)
    {
        sort(arr, arr+n);
        
        int diff =  arr[k-1] - arr[0];
        
        for(int i=1; i<=n-k; i++){
            int currDiff = arr[i+k-1] - arr[i];
            
            diff = min(diff,currDiff);
            
            
        }
        
        
        return diff;
    }
