//https://leetcode.com/problems/balanced-binary-tree/

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
    bool answer;
    int check_balance(TreeNode *root){
        if (root == NULL) return 0;
        if (answer == false) return 0;
        int lsubtree = check_balance(root -> left);
        int rsubtree = check_balance(root -> right);
        if (abs(lsubtree - rsubtree) > 1) answer = false;
        return 1 + max(lsubtree, rsubtree);
    }
    
    bool isBalanced(TreeNode* root) {
        answer = true;
        check_balance(root);
        return answer;
    }
};