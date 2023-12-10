class Solution {
public:
    const int MOD = 1000000007;
    int numberOfGoodPartitions(vector<int>& nums) {
 unordered_map<int, int> last;
        int n = nums.size();
        int mod = 1e9 + 7;
        
        for (int i = 0; i < n; ++i) {
            if (last.find(nums[i]) == last.end()) {
                last[nums[i]] = i;
            } else {
                last[nums[i]] = i;
            }
        }
        
        int N = 0;
        int l = 0;
        while (l < n) {
            int mx = last[nums[l]];
            while (l < mx) {
                mx = max(mx, last[nums[l]]);
                l += 1;
            }
            N += 1;
            l += 1;
        }
        
        return power(2, N - 1, mod);
    }
    
private:
    int power(long long x, int y, int p) {
        int res = 1;
        x = x % p;
        
        while (y > 0) {
            if (y & 1) {
                res = (res * x) % p;
            }
            y = y >> 1;
            x = (x * x) % p;
        }
        return res;
    }
};