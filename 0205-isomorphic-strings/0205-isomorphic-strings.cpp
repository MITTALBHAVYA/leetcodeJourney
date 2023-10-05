class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char>mps;
        unordered_map<char,bool>mpt;
        int size=s.length();
        for(int i=0;i<size;i++)
        {
            if(mps.count(s[i]))
            {if(mps[s[i]]!=t[i])
            {
                return false;
            }}
            else
            {
                if(mpt.count(t[i])&&mpt[t[i]])
                {
                    return false;
                }
                else
                {
                    mps[s[i]]=t[i];
                    mpt[t[i]]=true;
                }
            }
        }
     return true;
    }
};