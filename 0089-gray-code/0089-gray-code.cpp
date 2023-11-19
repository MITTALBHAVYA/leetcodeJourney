class Solution {
public:
    vector<int> grayCode(int n) {
        if(n==1){
        vector<int>ans;
        ans.push_back(0);
        ans.push_back(1);
        return ans;
        }
        vector<int>ans=grayCode(n-1);
        for(int i=ans.size()-1;i>=0;i--){
            int temp=(1 << n-1)|ans[i];
            ans.push_back(temp);
        }
        return ans;
    }
};