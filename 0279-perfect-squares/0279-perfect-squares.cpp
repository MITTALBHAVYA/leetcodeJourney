class Solution {
public:
    int numSquares(int n) {
        vector<int>dp(10005,INT_MAX-10);
        dp[0]=0;
        for(int o=1;o<=n;o++){
            int ans=INT_MAX-10;
            for(int i=1;i*i<=o;i++){
                ans=min(ans,dp[o-i*i]+1);
            }
            dp[o]=ans;
        }
        return dp[n];
    }
};