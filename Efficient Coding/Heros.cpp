#include <bits/stdc++.h>
using namespace std;


int solve(int n, int m, int h, vector<int> &v){
    int energy = m * h;
    
    sort(v.begin(), v.end());
    
    int vEnergy = accumulate(v.begin(), v.end(),0);
    
    if( energy == vEnergy) return 0;
    
    if(energy < v[0]) return n;
    
    int i = 0;
    while(energy!=0 && i<v.size()){
        energy -= v[i];
        i++;
    }
    
    if(i == v.size()) return 0;
    
    return v.size() - i ;
    
    
    
    
}

int main() {
    int n , m , h;
    
    cin>>n>>m>>h;
    
    vector<int> v(n);
    
    for(int i=0; i<n; i++)
           cin>>v[i];
    
    cout<<solve(n,m,h,v);
    return 0;
}
