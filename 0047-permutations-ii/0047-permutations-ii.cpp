class Solution {
public:
vector<vector<int>> permuteUnique(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> uniq_perms;
        uniq_perms.push_back(nums);
        while(next_permutation(nums.begin(), nums.end())){
            uniq_perms.push_back(nums);
        }
        return uniq_perms;
    }
};