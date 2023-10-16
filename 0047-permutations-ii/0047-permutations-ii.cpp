class Solution {
public:
int fact(int n)
    {
        int product=1;
        for(int i=n;i>=1;i--)
        {
            product=product*i;
        }
        return product;
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
       vector<vector<int>>ans;
       set<vector<int>>putting;
        int n=nums.size();
        int moves=fact(n);
        for(int i=0;i<moves;i++)
        {
            putting.insert(nums);
            next_permutation(nums.begin(),nums.end());
        }
        for(auto i:putting)
        {
            ans.push_back(i);
        }
        return ans;
    }
};