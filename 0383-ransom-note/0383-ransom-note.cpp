class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int n=ransomNote.length();
        int m=magazine.length();
        if(n>m)
        {
            return false;
        }
        else
        {
            int i=0;
            int j=0;
            sort(ransomNote.begin(),ransomNote.end());
            sort(magazine.begin(),magazine.end());
            while(i<n&&j<m)
            {
                if(ransomNote[i]<magazine[j])
                {
                    return false;
                }
                else if(ransomNote[i]==magazine[j])
                {
                    i++;j++;
                }
                else
                {
                    j++;
                }
            }
            if(i==n)
            return true;
            else
            return false;
        }
        
    }
};