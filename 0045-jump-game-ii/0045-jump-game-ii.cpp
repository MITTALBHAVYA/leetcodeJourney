class Solution {
public:
    int jump(vector<int>& nums) {
        int ans=0;
        //int range=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            nums[i]=max(nums[i]+i,nums[i-1]);
        }
        int pointer=0;
        while(pointer<nums.size()-1)
        {
            ans++;
            pointer=nums[pointer];
        }
        return ans;
    }
};