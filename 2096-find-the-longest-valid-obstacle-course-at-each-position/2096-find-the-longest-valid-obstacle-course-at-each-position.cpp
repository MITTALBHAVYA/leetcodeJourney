class Solution {
public:
    vector<int> longestObstacleCourseAtEachPosition(vector<int>& obstacles) {
     int n = obstacles.size();
    std::vector<int> res(n);
    std::vector<int> dp; // stores the LIS

    for (int i = 0; i < n; ++i) {
        int index = upper_bound(dp.begin(), dp.end(), obstacles[i]) - dp.begin();
        if (index == dp.size()) {
            dp.push_back(obstacles[i]);
        } else {
            dp[index] = obstacles[i];
        }
        res[i] = index + 1;
    }

    return res;
    }
};