//https://leetcode.com/problems/intersection-of-two-arrays-ii/

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> map;

        vector<int> answer;
        for (int i = 0; i < nums1.size(); i++)
            map[nums1[i]]++;
        for (int i = 0; i < nums2.size(); i++)
            if (--map[nums2[i]] >=0)
                answer.push_back(nums2[i]);
        
        return answer;
    }
};