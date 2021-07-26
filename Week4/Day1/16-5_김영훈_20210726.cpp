//https://leetcode.com/problems/two-sum/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> map;
        vector<int> ans(2);

        for (int i = 0; i < nums.size(); i++){
            if (map.find(target - nums[i]) != map.end()){
                map.erase(target - nums[i]);
            }
            map.insert(make_pair(target - nums[i], i));
        }
        for (int i = 0; i < map.size(); i++){
            if (map.find(nums[i]) != map.end()){
                if (map[nums[i]] != i){
                    ans[0] = i;
                    ans[1] = map[nums[i]];
                    break;
                }
            }
        }
        
        return ans;
    }
};