//https://leetcode.com/problems/univalued-binary-tree/

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
    bool answer = true;
    void inorder(TreeNode* root, int root_val){
        if (root == NULL)
            return;
        if (root -> val != root_val){
            answer = false;
            return;
        }
        inorder(root -> left, root_val);
        inorder(root -> right, root_val);
    }
    
    bool isUnivalTree(TreeNode* root) {
        int root_val = root -> val;
        inorder(root, root_val);
        return answer;
    }
};