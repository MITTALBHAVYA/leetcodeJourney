class Solution {
public:
    long long helper(int length,int low,int high,int zero,int one,vector<long long>&dp){
        if(length>high){
            return 0;
        }
        if(dp[length]!=-1){return dp[length];}
        long long ans=0;
        if(length>=low){
            ans=1;
        }
        ans+=helper(length+zero,low,high,zero,one,dp) + helper(length + one,low,high,zero,one,dp);
        dp[length]=ans;
        return ans%1000000007;
    }
    int countGoodStrings(int low, int high, int zero, int one) {
        vector<long long>dp(high+1,-1);
        return helper(0,low,high,zero,one,dp);
    }
};