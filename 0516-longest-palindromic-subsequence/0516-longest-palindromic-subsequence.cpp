class Solution {
public:
    int solveSpaceOptimise(string &text1, string &text2)
    {
        vector<int>curr(text2.length()+1);
        vector<int>next(text2.length()+1);
        for (int index1 = text1.size() - 1; index1 >= 0; index1--)
        {
            for (int index2 = text2.size() - 1; index2 >= 0;index2--)
            {
                int ans = 0;
                if (text1[index1] == text2[index2])
                {
                    ans = 1 + next[index2 + 1];
                }
                else
                {
                    ans = max(next[index2], curr[index2+1]);
                }
                curr[index2] = ans;
            }
            next=curr;
        }
        return next[0];
    }
    int longestPalindromeSubseq(string s) {
        string revStr=s;
        reverse(revStr.begin(),revStr.end());
        int ans=solveSpaceOptimise(s,revStr);
        return ans;
    }
};