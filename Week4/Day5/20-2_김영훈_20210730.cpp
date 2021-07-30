//https://leetcode.com/problems/missing-number/

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int answer = nums.size();
        int i = 0;
        
        for (auto num : nums){
            answer ^= num;
            answer ^= i;
            i++;
        }
        return answer;
    }
};