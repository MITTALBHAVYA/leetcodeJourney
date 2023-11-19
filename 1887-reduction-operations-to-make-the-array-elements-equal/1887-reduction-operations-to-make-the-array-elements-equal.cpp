class Solution {
public:
    int reductionOperations(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int prev=nums[0];
        int sum=0;
        int adder=0;
        for(int i=1;i<nums.size();i++){
            if(prev==nums[i]){
                sum+=adder;
            }
            else{
                prev=nums[i];
                adder++;
                sum+=adder;
            }
        }
        return sum;  
    }
};