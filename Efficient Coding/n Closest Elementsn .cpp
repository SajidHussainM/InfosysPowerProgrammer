/*

Problem Statement
read_more
Sam is given a sorted integer array. His task is to find an array of n elements which are closest to target t. If target t is less than or equal to the first element in the input array, return first n elements. Similarly, if target is more than or equal to the last element in the input array, return the last n elements. The returned elements should be in the same order as present in the input array. If two elements in the input array have same closeness to target t but only one of them is required, then take the smaller one.

Input Format:

First line contains an integer n, denoting number of elements in output array.
Second line contains an integer t, denoting the target value.
Third line contains the comma separated elements of input array.
Constraints:

0 < n <= size of input array
0 <= t <=106
Output Format:

Array of n elements closest to target t
Sample Input	Sample Output	Explanation
4
19
11,13,15,20,56,90,91	[11, 13, 15, 20]	4 elements closest to target 19 are 11,13,15 and 20 in the given input array
3
10
1,3,5,10,16,20,21	[5, 10, 16]	3 elements closest to target 10 are 5, 10 and 16 in the given input array
2
9
1,3,5,10,13,20,21	[5, 10]	2 elements closest to target 10 are 5 and 10 in the given input array. 13 is also as close to target 9 as 5 : |13-9|=|5-9|=4, but 5<13 so 5 is taken.


*/


#include <bits/stdc++.h>
using namespace std;

vector<int> closest_elements(int n,int t, vector<int> a){
    if(t <= a[0])
        return vector<int> (a.begin(), a.begin()+n);

    if(t >= a[a.size()-1])
        return vector<int> (a.end() - n, a.end());
    
   int left = 0 , right = a.size()-1;
    vector<int> ans;
    
    while(right - left >= n){
        if(t-a[left] <= a[right]-t)
            right--;
        else
            left++;
    }
    
    for(int i=left; i<=right; i++)
        ans.push_back(a[i]);
    
    return ans;
        
}

int main() {
	int n , t;
    cin>>n>>t;
    
    vector<int> a;
    
    string s;
    cin>>s;
    stringstream ss(s);
    int nn;
    
    while(ss >> nn){
        a.push_back(nn);
        
        if(ss.peek() == ',')
            ss.ignore();
    }
    
    vector<int> ans = closest_elements(n,t,a);
    
    cout<<"[";
	
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i];
        
        if(i!=ans.size()-1) 
            cout<<", ";
    }
    
    
    
     cout<<"]";
	return 0;
}






#include<bits/stdc++.h>
using namespace std;

vector<int> closest_elements(int n, int t, vector<int> arr) {
    if(t <= arr[0]) {
        return vector<int>(arr.begin(), arr.begin() + n);
    }
    if(t >= arr[arr.size()-1]) {
        return vector<int>(arr.end() - n, arr.end());
    }

    int left = 0, right = arr.size()-1;
    while(right - left >= n) {
        if(t - arr[left] <= arr[right] - t) {
            right--;
        }
        else {
            left++;
        }
    }
    vector<int> ans;
    for(int i=left; i<=right; i++) {
        ans.push_back(arr[i]);
    }
    return ans;
}

int main() {
    int n, t;
    cin >> n >> t;
    vector<int> arr;
    string s;
    cin >> s;
    stringstream ss(s);
    int num;
    while(ss >> num) {
        arr.push_back(num);
        if(ss.peek() == ',') {
            ss.ignore();
        }
    }

    vector<int> ans = closest_elements(n, t, arr);
        
    cout<<"[";
    for(int i=0; i<ans.size(); i++) {
        cout << ans[i];
        if(i != ans.size()-1) {
            cout << ","<<" ";
        }
    }
    
    cout<<"]";

    return 0;
}



#include <bits/stdc++.h>
using namespace std;

vector<int> closest_elements(int n,int t, vector<int> &a){
    if(t <= a[0])
        return vector<int> (a.begin(), a.end()+n);

    if(t >= a[a.size()-1])
        return vector<int> (a.end() - n, a.end());
    
   int left = 0 , right = a.size()-1;
    vector<int> ans;
    
    while(right - left >= n){
        if(t-a[left] <= a[right]-t)
            right--;
        else
            left++;
    }
    
    for(int i=left; i<=right; i++)
        ans.push_back(a[i]);
    
    return ans;
        
}

int main() {
	int n , t;
    cin>>n>>t;
    
    vector<int> a;
    
    string s;
    cin>>s;
    stringstream ss(s);
    int nn;
    
    while(ss >> nn){
        a.push_back(nn);
        
        if(ss.peek() == ',')
            ss.ignore();
    }
    
    vector<int> ans = closest_elements(n,t,a);
    
    cout<<"[";
	
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i];
        
        if(i!=ans.size()-1) 
            cout<<", ";
    }
    
    
    
     cout<<"]";
	return 0;
}
