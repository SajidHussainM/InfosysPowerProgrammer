/*

Given an array with repeated elements, the task is to find the maximum distance between two occurrences of an element.

Example 1:

Input
n= 6
arr = {1, 1, 2, 2, 2, 1}

Output
5

Explanation
arr[] = {1, 1, 2, 2, 2, 1}
Max Distance: 5
Distance for 1 is: 5-0 = 5
Distance for 2 is : 4-2 = 2
Max Distance 5
Example 2:

Input
n = 12
arr = {3, 2, 1, 2, 1, 4, 5, 8, 6, 7, 4, 2}

Output
10

Explanation



arr[] = {3, 2, 1, 2, 1, 4, 5, 8, 6, 7, 4, 2}
Max Distance 10
maximum distance for 2 is 11-1 = 10
maximum distance for 1 is 4-2 = 2
maximum distance for 4 is 10-5 = 5
Your Task:
Complete maxDistance() function which takes both the given array and their size as function arguments and returns the maximum distance between 2 same elements.


Expected Time Complexity : O(N)
Expected Auxilliary Space : O(N)

Constraints:

1<=N<=106

 
 
 */



class Solution{
    public:
    // your task is to complete this function
    int maxDistance(int arr[], int n)
    {
        unordered_map<int,int> mp1, mp2, mp3, mp4;
        
        for(int i=0; i<n; i++){
            mp1[arr[i]]++;
            mp2[arr[i]] = i;
        }
        
        
        for(auto it : mp1){
            if(it.second > 1 && mp3.find(it.first) == mp3.end())
                mp3[it.first]++;
                
        }
        
        for(int i=0;i<n; i++){
            if(mp3[arr[i]]!=mp3.end() && mp4[arr[i]] == mp4.end())
                mp4[arr[i]] = i;
        }
        
        int count = 0;
        
        for(auto it : mp2){
            count += it.second - mp4[it.first];
        }
        
        return count;
    }
};
