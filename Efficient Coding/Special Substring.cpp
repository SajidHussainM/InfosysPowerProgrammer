/*

A string is said to be a special string if either of two conditions is met:

All of the characters are the same, e.g. aaa.

All characters except the middle one are the same, e.g. aadaa.

A special substring is any substring of a string which meets one of those criteria. Given a string, determine how many special substrings can be formed from it.

Sample Input

Sample Output

Explanation

mnonopoO

11

For the given string, the possible special substrings are:

m
n
o
n
o
p
o
O
non
ono
opo

Hence the output is 11

*/


long substrCount(int n, string s) {
    vector<int>    v(n);
    long  ans  = 0;
    
    int i =  0;
    
     while(i < n){
         int count = 1;
        int j =  i  + 1;
        while(j<n && s[i] == s[j]) 
            j++ , count++;
         
         ans += (count * (count + 1)) >> 1;
         v[i] = count;

         i = j;

        }
    
    
    for(int i=1; i<n; i++){
        if(s[i] == s[i-1])
          v[i] = v[i-1];
        
        
        if(s[i+1]==s[i-1] && s[i]!=s[i-1])  ans += min(v[i-1], v[i+1]);
    }
    
    return ans;
    
}

