//https://leetcode.com/problems/find-all-numbers-disappeared-in-an-array/

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        map<int, int> map;
        vector<int> answer;

        for (int i = 1; i <= nums.size(); i++)
            map.insert(make_pair(i, 1));

        for (int i = 0; i < nums.size(); i++)
            if (map.find(nums[i]) != map.end())
                map.erase(nums[i]);

        for (auto i : map)
            answer.push_back(i.first);
        
        return answer;
    }
};