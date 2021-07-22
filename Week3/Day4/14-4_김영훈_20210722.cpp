//https://www.geeksforgeeks.org/vector-erase-and-clear-in-cpp/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void inorder(TreeNode* root, vector<int> &nums){
        if (root == NULL)
            return;
        inorder(root -> left, nums);
        nums.push_back(root -> val);
        inorder(root -> right, nums);
    }
    
    int minDiffInBST(TreeNode* root) {
        vector<int> nums;
        int min_val = INT_MAX;
        inorder(root, nums);
        
        for (int i = 0; i < nums.size() - 1; i++){
            for (int j = i + 1; j < nums.size(); j++){
                min_val = min(min_val, abs(nums[i] - nums[j]));
            }
        }
        
        return min_val;
    }
};