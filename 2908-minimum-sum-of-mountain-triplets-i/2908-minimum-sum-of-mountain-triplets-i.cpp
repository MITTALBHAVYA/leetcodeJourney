class Solution {
public:
    int minimumSum(vector<int>& nums) {
        bool find=false;
        int sum=INT_MAX;
        int n=nums.size();
        for(int i=0;i<n-2;i++){
            for(int j=i+1;j<n-1;j++){
                for(int k=j+1;k<n;k++){
                    if(nums[j]>nums[k] && nums[j]>nums[i]){
                        find=true;
                        sum=min(sum,nums[i]+nums[j]+nums[k]);
                    }
                }
            }
        }
        if(find){
            return sum;
        }
        else{
            return -1;
        }
    }
};