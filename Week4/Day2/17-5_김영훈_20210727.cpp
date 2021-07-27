//https://leetcode.com/problems/intersection-of-two-arrays/

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;    
        unordered_set<int> counts(nums1.begin(), nums1.end());

        for (int i = 0; i < nums2.size(); i++)
            if (counts.erase(nums2[i]))
                ans.push_back(nums2[i]);
        
        return ans;
    }
};