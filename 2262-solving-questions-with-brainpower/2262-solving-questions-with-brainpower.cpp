class Solution {
public:
    long long unsigned dp[100001];
    long long solve(int index,vector<vector<int>>&questions,int n){
        if(index>=n){return 0;}
        if(dp[index]!=-1)return dp[index];
        long long take=questions[index][0] + solve(index+1+questions[index][1],questions,n);
        long long nottake=solve(index+1,questions,n);
        return dp[index]=max(take,nottake);
    }
    long long mostPoints(vector<vector<int>>& questions) {
        int n=questions.size();
        memset(dp,-1,sizeof(dp));
        return solve(0,questions,n);
    }
};