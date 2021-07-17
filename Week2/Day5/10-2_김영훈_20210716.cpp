//https://leetcode.com/problems/increasing-order-search-tree/

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
   
    void rec(TreeNode *root, TreeNode *&ans){
        if (root == NULL) return;
        rec(root -> left, ans);
        ans -> right = new TreeNode(root -> val);
        ans = ans -> right;
        rec(root -> right, ans);
    }
    
    TreeNode* increasingBST(TreeNode* root) {
        TreeNode* tmp;
        TreeNode *answer = new TreeNode();
        tmp = answer;
        rec(root, answer);
        return tmp -> right;
    }
};
