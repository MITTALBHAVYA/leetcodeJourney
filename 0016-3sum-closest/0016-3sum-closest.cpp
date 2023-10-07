class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int ans=nums[0]+nums[1]+nums[2];
        int i,n=nums.size();
        for(int i=0;i<n-2;i++){
            int l=i+1,r=n-1;
            while(l<r)
            {
                int s=nums[i]+nums[l]+nums[r];
                if(s==target){
                    return s;
                }
                if(abs(s-target)<abs(ans-target))
                {
                    ans=s;
                }
                if(s<target)l++;
                else r--;
            }
        }
        return ans;
    }
};