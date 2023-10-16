class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n=strs.size();
        unordered_map<string,vector<string>>mp;
        for(auto i:strs)
        {
            string p=i;
            sort(p.begin(),p.end());
            mp[p].push_back(i);
        }
        //int k=0;
        vector<vector<string>>ans;
        int size=mp.size();
        for(auto i:mp)
        {
            ans.push_back(i.second);
        }
        return ans;
    }
};