/*

You need to build a road in a rugged terrain. You know the sea level of each segment of the rugged terrain, i.e. the i-th segment is Li meters from sea level.

You need to transform the terrain into a strictly downward sloping terrain for the road, i.e, for each i-th segment where 2 <= i <= N, resultant Li-1 > Li. In order to do so, you employ a powerful digging team to help you dig and reduce the sea level of the segments. On day D, the team can reduce the sea level for each segment that you scheduled that day by 2D-1 meters each.

You are allowed to assign the team to dig on multiple segments and/or dig on the same segments for multiple days.

Your task is to find the minimum number of days needed to transform the terrain as per your requirements.

Input Format:

The first line contains an integer, N, denoting the number of elements in an integer array L. Each line i of the N subsequent lines (where 0 < i ≤ N) contains an integer describing Li, the sea level of the i-th segment.

Constraints:

1 ≤ N ≤ 10^5

10^9 ≤ L[i] ≤ 10^9

Output Format:

Print the minimum number of days needed to dig the terrain so as to transform it as per the requirements. 

Sample Input	Sample Output	Explanation
2
3
3	1	We can dig on the 2nd segment, reducing it from 3-meter sea level to 2. Resulting in {3, 2} which is strictly decreasing.
2
5
-3	0	It is already strictly decreasing before start.
4
-1
1
1
1	3	One of the possible ways: On day 1, we can dig 1 meter on 2nd, 3rd and 4th segments, resulting in {-1, 0, 0, 0} On day 2, we can dig 2 meters on 2nd segment and 3 meters on 3rd and 4th segments, resulting in {-1, -2, -3, -3} On day 3, we can dig 1 meter on 4th segment, resulting in {-1, -2, -3, -4}

*/



#include <bits/stdc++.h>
#define int long long int 
using namespace std;
int32_t main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i =0; i < n; i++) { cin >> a[i];
    }
        int max_dig = 0;
        for(int i =0; i < n-1; i++)
        {
            if(a[i] <= a[i+1])
            {
                max_dig = max(max_dig,(a[i+1]-a[i]+1));
                a[i+1] = a[i] -1;
            }
        }
        int ans = ceil(sqrt(max_dig));
        cout<<  ans << endl;
        
}
