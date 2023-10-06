// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int low=1,high=n;
        while(low<=high)
        {
           int mid=low+((high-low)/2);
            if(isBadVersion(mid))
            {
                if(low==high)
                {
                    return mid;
                }
                else
                {
                    high=mid;
                }
            }
            else
            {
                low=mid+1;
            }
        }
        return 0;
    }
};