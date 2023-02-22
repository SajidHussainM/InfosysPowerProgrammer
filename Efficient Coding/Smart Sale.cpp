/*

A sales executive needs to simplify an assigned sales task. The task is to sell the items given to her in a bag, where each item has an ID number.

It is easier to sell items with the same ID numbers. The sales executive also decides to remove some items from the bag. The largest number of items that she can remove is also known to her. Find the minimum number of different IDs the final bag can contain after removing the allowed number of items. 

For example, she starts with a bag that contains the following n = 6 items: ids = [1,1,1,2,2,3] and she can remove m = 2 items. If she removes 2 of item 1, she will still have items of all three types. She could remove 2 of item 2, and have ids = [1,1,1,3] with 2 discrete item types or remove 1 each of types 2 and 3 leaving ids = [1,1,1,2].  Either way, there are 2 item types left.

Input Format:

The first line contains an integer, n, denoting the size of the array ids.

Each line i of the n subsequent lines (where 0 ≤ i < n) contains an integer describing ids[i].

The last line contains an integer, m, denoting maximum number of items that can be deleted.

Constraints:

1 ≤ n ≤ 100000
1 ≤ ids[i] ≤ 1000000
1 ≤ m ≤ 100000
Output Format:

Print the minimum number of different IDs the final bag can contain.

 

Sample Input	Sample Output	Explanation
6
1
2
3
1
2
2
3	1	Initially, ids = [1,2,3,1,2,2]. 3 items can be deleted and it is optimal to choose items having IDs 1 and 3. The final bag contains 3 items, all with ID 2.
4
1
1
1
1
2	1	Initially, the bag contains 4 items of the same kind, so whatever item the executive deletes, the minimum different ID numbers will be 1.


*/





#include <bits/stdc++.h>
using namespace std;

bool compare(pair<int,int>p1,pair<int,int>p2)
{
    if(p1.second==p2.second) //if frequency is equal
    {
        return p1.first<p2.first; //return the smaller value
    }
    return p1.second>p2.second; //return the element with greater frequency
}
vector<int> f()
{
    
    int n=arr.size();
    map<int,int>m;
    for(int i=0;i<n;i++)
    {
        m[arr[i]]+=1;
    }
    vector<pair<int,int>>a;
    for(auto it=m.begin();it!=m.end();it++)
    {
        a.push_back(make_pair(it->first,it->second)); //making pair of element and it's frequency
    }
    sort(a.begin(),a.end(),compare);
    vector<int>ans;
    for(auto x:a)
    {
        while(x.second--)
        {
        ans.push_back(x.first);
        }
    }
    for(auto x:ans)
    {
        cout<<x<<" ";
    }
    return 0;
}



int main() {
    int n , m;
    cin>>n;
    vector<int> a(n), b;
    map<int,int> mp, mp1;
    
    for(int i=0; i<n; i++) {
        cin>>a[i];
        mp[a[i]]++;
    }
    
    
    cin>>m;
    
   b = 
    
    for(auto it : b) cout<<it<<" ";
    cout<<endl;
    
    for(int i=0; i<n-m; i++){
        if(mp1.find(b[i]) == mp1.end())
            mp1[b[i]] = i;
    }
    
    for(auto it : mp1) cout<<it. first<<" "<<it. second<<endl;
    
    
    
    cout<<mp1. size() ;
    
    
    return 0;
}
