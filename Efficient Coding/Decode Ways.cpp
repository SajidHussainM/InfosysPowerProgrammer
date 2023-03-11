#include <bits/stdc++.h>
using namespace std;

int f(int i,string s, vector<int> dp, int n){
   
    if(i == n) return 1;
    if(i > n) return 0;
   
    if(dp[i] != -1) return dp[i];
   
    int onePick = 0;
    if(s[i]>='1' && s[i]<='9'){
         onePick = f(i+1,s,dp,n);
    }
   
    int twoPick = 0;
     string t = s.substr(i,2);
    if(i<n && t>="10" && t<="26")
      twoPick = f(i+2,s,dp,n);
   
    return dp[i] =  onePick +  twoPick;
}

int main() {
   
    string s;
    cin>>s;
    int n = s. size() ;
   
    vector<int> dp(n+1,-1);
   
    cout<<f(0,s,dp,n);
    return 0;
}
