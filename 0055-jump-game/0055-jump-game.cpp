class Solution {
public:
    bool canJump(vector<int>& nums) {
        int pointer=0;
        for(int i=0;i<nums.size();i++){
            if(pointer<i){
                return false;
            }
            pointer=max(pointer,i+nums[i]);
        }
        return true;
    }
};