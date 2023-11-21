class Solution {
public:
    int reverseNumber(int number) {
    int reversed = 0;
    
    while (number != 0) {
        int digit = number % 10; // Extract the last digit
        reversed = reversed * 10 + digit; // Append the digit to reversed
        number /= 10; // Remove the last digit from the number
    }
    
    return reversed;
}
    int countNicePairs(vector<int>& nums) {
        int n=nums.size();
        unordered_map<long long int,long long int>mp;
        for(int i=0;i<n;i++){
            // nums[i]-=reverseNumber(nums[i]);
            mp[nums[i]-reverseNumber(nums[i])]++;
        }
        long long sum=0;
        for(auto i : mp){
            sum+=((i.second-1)*(i.second))/2;
            sum%=1000000007;
            // cout<<sum<<endl;
        }
        return (int)sum%1000000007;
    }
};