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
    void swap_val(TreeNode *node1, TreeNode *node2){
        int tmp;
        tmp = node1 -> val;
        node1 -> val = node2 -> val;
        node2 -> val = tmp;
    }
    TreeNode* rec(TreeNode* root){
        if (root == NULL) return 0;
        rec(root -> left);
        rec(root -> right);
        swap(root -> left, root -> right);
        return root;
    }
    
    TreeNode* invertTree(TreeNode* root) {
        rec(root);

        return root;
    }
};
