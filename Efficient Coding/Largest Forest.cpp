#include <bits/stdc++.h>
using namespace std;

int counter;

void dfs(int i, int j, vector<vector<char>> &s){
    if(i<0 || i>=s.size() || j<0 || j>=s[0].size() || s[i][j] == 'W')
        return;
    
    counter++;
    s[i][j] = 'W';
    
    dfs(i+1,j,s);
    dfs(i-1,j,s);
    dfs(i,j+1,s);
    dfs(i,j-1,s);
}

int main() {
    int n;
    cin>>n;
    
    if(n==0) return 0;
    
    vector<vector<char>> s(n, vector<char> (n,'s'));
    
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>s[i][j];
        }
    }
    
    if(n==1)  { 
        if(s[0][0] == 'T'){ cout<<"1"; } 
        return 0;
    }
                             
     int  ans = INT_MIN;
                             
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(s[i][j] == 'T'){
                counter = 0;
                dfs(i,j,s);
                ans = max(ans,counter);
            }
        }
    }            
    
    cout<<ans<<endl;
    return 0;
}
