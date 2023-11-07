class Solution {
public:
    int solve(string &s1,string &s2,int i,int j,vector<vector<int>> &dp){
        if(i==s1.length() && j==s2.length()){
            return 0;
        }
        if(i==s1.length()){
            int sum=0;
            for(int k=j;k<s2.length();k++){
                sum+=(int)s2[k];
            }
            return sum;
        }
        if(j==s2.length()){
            int sum=0;
            for(int k=i;k<s1.length();k++){
                sum+=(int)s1[k];
            }
            return sum;
        }
        if(dp[i][j]!=INT_MAX){
            return dp[i][j];
        }
        int ans=0;
        if(s1[i]==s2[j]){
            ans=solve(s1,s2,i+1,j+1,dp);
        }
        else{
            ans=min((int)s1[i]+solve(s1,s2,i+1,j,dp),(int)s2[j] + solve(s1,s2,i,j+1,dp));
        }
        return dp[i][j]=ans;
    }
    int minimumDeleteSum(string s1, string s2) {
        int n=s1.length();
        int m=s2.length();
        vector<vector<int>>dp(n+1,vector<int>(m+1,INT_MAX));
        return solve(s1,s2,0,0,dp);
    }
};