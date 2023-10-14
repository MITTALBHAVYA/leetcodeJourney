class Solution {
public:
vector<vector<int>>dp;
    int solve(int start,int remain,vector<int>& cost, vector<int>& time)
    {
        if(remain<=0){
            return 0;
        }
        if(start==cost.size())
        {
            return 1e9;
        }
        if(dp[start][remain]!=-1){return dp[start][remain];}
        int include=cost[start] + solve(start+1,remain-1-time[start],cost,time);
        int exclude=solve(start+1,remain,cost,time);
        return dp[start][remain]=min(include,exclude);
    }
    int paintWalls(vector<int>& cost, vector<int>& time) {
        int n=cost.size();
        dp=vector(n,vector(n+1,-1));
        int start=0,remain=n;
        return solve(start,remain,cost,time);
    }
};