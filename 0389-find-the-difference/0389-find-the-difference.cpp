class Solution {
public:
    char findTheDifference(string s, string t) {
        unordered_map<char,int>mp;
        char ans;
        for(int i=0;i<s.size();i++)
        {
            mp[s[i]]++;
            mp[t[i]]--;
        }
        mp[t[t.size()-1]]--;
        for(auto i:mp)
        {
            if(i.second==-1)
            {
                ans = i.first;
                break;
            }
        }
        return ans;
    }
};