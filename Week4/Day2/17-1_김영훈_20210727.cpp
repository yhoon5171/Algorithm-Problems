//https://leetcode.com/problems/maximum-subarray/

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        vector<int> dp(nums.size());
        int ans = nums[0];

        dp[0] = nums[0];
        for (int i = 1; i < dp.size(); i++){
            dp[i] = nums[i] + (dp[i - 1] > 0 ? dp[i - 1] : 0);
            ans = max(dp[i], ans);
        }
        return ans;
    }
}
