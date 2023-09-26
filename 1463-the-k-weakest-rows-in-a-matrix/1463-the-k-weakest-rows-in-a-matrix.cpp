class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        int m=mat.size();
        int n=mat[0].size();
        vector<int>ans(k);
        vector<pair<int,int>>str;
        for(int i=0;i<m;i++)
        {
            int sum=accumulate(mat[i].begin(),mat[i].end(),0);
            str.push_back({sum,i});
        }
        sort(str.begin(),str.end());
        for(int i=0;i<k;i++)
        {
            ans[i]=str[i].second;
        }
        return ans;
    }
};