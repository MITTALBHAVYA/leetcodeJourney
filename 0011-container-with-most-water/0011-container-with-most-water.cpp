class Solution {
public:
    int maxArea(vector<int>& height) {
        int low=0;
        int high=height.size()-1;
        int currentAns=0;
        int maxAns=INT_MIN;
        while(low<high)
        {
            currentAns=min(height[low],height[high])*(high-low);
            maxAns=max(maxAns,currentAns);
            if(height[high]>height[low])
            {
                low++;
            }
            else
            {
                high--;
            }
        }
        return maxAns;
    }
};