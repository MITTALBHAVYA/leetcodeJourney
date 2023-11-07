class Solution {
public:
    int solve(string &s,string &t,int i,int j,vector<vector<int>>&dp){
        //base
        if(j<0){
            return 1;
        }
        if(i<0){
            return 0;
        }
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        // recursion
        int ans=0;
        if(s[i]==t[j]){
            ans= solve(s,t,i-1,j,dp)+solve(s,t,i-1,j-1,dp);
        }
        else{ans= solve(s,t,i-1,j,dp);}
        dp[i][j] = ans;
        return ans;
    }
    int numDistinct(string s, string t) {
        int i=s.size();
        int j=t.size();
        vector<vector<int>>dp(i+1,vector<int>(j+1,-1));
        int ans=solve(s,t,i-1,j-1,dp);
        return ans;
    }
};