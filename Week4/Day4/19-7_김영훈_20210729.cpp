//https://leetcode.com/problems/sum-of-all-subset-xor-totals/

class Solution {
public:
    int ans = 0;

    void dfs(int v, vector<int> &arr, vector<int> nums){
        if (v == nums.size()){
            int xortmp = 0;
            for (int i = 0; i < nums.size(); i++){
                if (arr[i] == 1){
                    xortmp ^= nums[i];
                }
            }
            ans += xortmp;
        }
        else{
            arr[v] = 1;
            dfs(v + 1, arr, nums);
            arr[v] = 0;
            dfs(v + 1, arr, nums);
        }
    }
    
    int subsetXORSum(vector<int>& nums) {
        vector<int> arr(nums.size());
        int v;

        dfs(0, arr, nums);
        return ans; 
    }
};