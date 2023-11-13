class Solution {
public:
    int helper(vector<int>& days, vector<int>& costs,int index,vector<int>&dp){
        if(index<0){
            return 0;
        }
        if(dp[days[index]]!=-1){
            return dp[days[index]];
        }
        int daypoint=costs[0]+helper(days,costs,index-1,dp);
        int weekinde=upper_bound(days.begin(),days.end(),days[index]-7)-days.begin();
        weekinde--;
        int weekpoint=costs[1] + helper(days,costs,weekinde,dp);
        int indmonth=upper_bound(days.begin(),days.end(),days[index]-30)-days.begin();
        indmonth--;
        int monthpoint=costs[2] + helper(days,costs,indmonth,dp);
        return dp[days[index]]=min({daypoint,weekpoint,monthpoint});
    }
    int mincostTickets(vector<int>& days, vector<int>& costs) {
        //costs[0]->1 day , costs[1]->7 day , costs[2]-> 30 day
       //
       int n=days.size();
       vector<int>dp(366,-1);
       return helper(days,costs,n-1,dp);
    }
};