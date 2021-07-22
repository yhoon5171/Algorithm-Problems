//https://leetcode.com/problems/sum-of-root-to-leaf-binary-numbers/

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
    int binary = 0;
    int result = 0;
    
    int binaryToInt(vector<int> nums){
        
        reverse(nums.begin(), nums.end());
        int a = 0;
        
        for (int i = 0; i < nums.size(); i++)
            a += pow(2, i) * nums[i];
        
        return a;
    }
    
    void addition(TreeNode* root, vector<int> nums){
        if (root == NULL) return;
        nums.push_back(root -> val);    
        if (root -> left == NULL && root -> right == NULL){
            result += binaryToInt(nums);
            return;
        }
        addition(root -> left, nums);
        addition(root -> right, nums);
    }
    
    int sumRootToLeaf(TreeNode* root) {
        vector<int> nums;
        if (!root) return 0;
        addition(root, nums);
        
        return result;
    }
};