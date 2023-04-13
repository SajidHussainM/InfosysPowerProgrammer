class Solution{
public:	
	 
	 int solve(string s1, string s2, int n, int m, vector<vector<int>> &dp) {
	     
	     if(n == 0 && m == 0) return 1;
	     
	     if(n == 0) return 0;
	     
	     if(m == 0){
	         for(int i=0; i<n; i++){
	             if(s1[i] >= 'A' && s1[i]<='Z') return 0;
	         }
	         
	         return 1;
	     }
	     
	     
	     if(dp[n][m] != -1 ) return dp[n][m];
	     
	     if(s1[n-1]>='A' && s1[n-1]<='Z'){
	         if(s1[n-1] == s2[m-1])
	            return dp[n][m] = solve(s1,s2,n-1,m-1,dp);
	       
	       return dp[n][m] = 0;
	     }
	     
	     if(toupper(s1[n-1]) == s2[m-1]){
	         return dp[n][m] = solve(s1,s2,n-1,m-1,dp) || solve(s1,s2,n-1,m,dp);
	     }
	     
	     return dp[n][m] = solve(s1,s2,n-1,m,dp);
	 }
		
	int stringConversion(string X, string Y)
	{
	    int n = X.length();
	    int m = Y.length();
	    
	    vector<vector<int>> dp(n+1, vector<int>(m+1,-1));
	    
	    
	    
	    return solve(X,Y,n,m,dp);
	}
};
