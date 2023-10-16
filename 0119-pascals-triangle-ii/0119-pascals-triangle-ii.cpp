class Solution {
public:
    vector<int> getRow(int rowIndex) {
        rowIndex++;
        vector<int>ans;
        long long res=1;
        ans.push_back(1);
        for(int i=1;i<rowIndex;i++)
        {
            res=res*(rowIndex-i);
            res/=i;
            ans.push_back(res);
        }
        return ans;
    }
};