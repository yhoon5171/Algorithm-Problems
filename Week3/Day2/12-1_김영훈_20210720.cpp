//https://leetcode.com/problems/sort-array-by-parity-ii/

class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        vector<int> even;
        vector<int> odd;
        vector<int> answer;
        int m = 0, n = 0;

        for (int i = 0; i < nums.size(); i++){
            if (nums[i] % 2 == 0)
                even.push_back(nums[i]);
            else 
                odd.push_back(nums[i]);
        }

        for (int i = 0; i < nums.size(); i++){
            if (i % 2 == 0)
                answer.push_back(even[m++]);
            else
                answer.push_back(odd[n++]);
        }
        
        return answer;
    }
};
