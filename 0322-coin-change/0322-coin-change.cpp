class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        if(amount<1){
            return 0;
        }
        vector<unsigned int>dp(amount+1,INT_MAX);
        dp[0]=0;
        for(int i=1;i<=amount;i++){
            for(auto coin : coins){
                if(coin<=i && dp[i-coin]!=INT_MAX){
                    dp[i]=min(dp[i],1 + dp[i-coin]);
                }
            }
        }
        if(dp[amount]==INT_MAX){
            return -1;
        }
        else{
            return dp[amount];
        }
    }
};