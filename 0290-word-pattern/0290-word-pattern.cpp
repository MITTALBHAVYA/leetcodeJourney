class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char,string>mp;
        unordered_map<string,char>mp2;
        int i=0,j=0;
        while(i<pattern.length() && j<s.length()){
            string str="";
            while(j<s.length() && s[j]!=' ')
            {
                str+=s[j];
                j++;
            }
            j++;
            if(mp.count(pattern[i])){
                if(mp[pattern[i]]!=str)return false;
            }
            if(mp2.count(str)){
                if(mp2[str]!=pattern[i])return false;
            }
            mp[pattern[i]]=str;
            mp2[str]=pattern[i];
            i++;
        }
        if(j<s.length())return false;
        if(i<pattern.length())return false;
        return true;
    }
};