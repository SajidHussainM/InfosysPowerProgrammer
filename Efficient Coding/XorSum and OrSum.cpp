#include<bits/stdc++.h>
using namespace std;

int solve(vector<int> a, int n, int k){
    int xorSum = 0 , x = 0;
    for(int i=0; i<=k; i++){
        int sum = 0;
        for(int j=0; j<n; j++){
            sum += (i^a[j]);
        }
        if(sum >  xorSum)  xorSum =  sum , x = i;
    }
    
    int orSum = 0;
    for(int j=0; j<n; j++){
            orSum += (x | a[j]);
      }
    
    if( orSum ==  xorSum ) return 1;
    
    return 0;
    
}

int main() {
    int n , k ;
    cin>>n>>k;
    vector<int> a(n);
    
    for(int i=0; i<n; i++) cin>>a[i];
    
    int ans = solve(a,n,k);
    
    if(ans) cout<<"Yes"<<"\n";
    else cout<<"No"<<"\n";
    
    
    return 0;
}

