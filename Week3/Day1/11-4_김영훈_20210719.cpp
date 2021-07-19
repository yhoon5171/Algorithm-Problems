//https://leetcode.com/problems/largest-perimeter-triangle/

class Solution {
public:    
    int largestPerimeter(vector<int>& nums) {
        int a = nums.size() - 1;
        int sum = 0;

        sort(nums.begin(), nums.end());

        while(a >= 2){
            if (nums[a] < nums[a - 1] + nums[a - 2]){
                sum = nums[a] + nums[a - 1] + nums[a - 2];
                break;
            }
            a--;
        }

        return sum;
    }
};