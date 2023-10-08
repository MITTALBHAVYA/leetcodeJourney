class Solution {
public:
    void solve(int index,int target,vector<int>&candidates,vector<vector<int>>&ans,vector<int>&passon)
    {
        if(target==0)
        {
            ans.push_back(passon);
            return ;
        }
        for(int i=index;i<candidates.size();i++){
            if(i>index && candidates[i]==candidates[i-1])continue;
            if(candidates[i]>target)break;
            passon.push_back(candidates[i]);
            solve(i+1,target-candidates[i],candidates,ans,passon);
            passon.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<vector<int>>ans;
        vector<int>passon;
        int index=0;
        solve(index,target,candidates,ans,passon);
        return ans;
    }
};