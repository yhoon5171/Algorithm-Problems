//https://leetcode.com/problems/cousins-in-binary-tree/

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
    int xdepth = 0;
    int ydepth = 0;
    TreeNode* xparent = NULL;
    TreeNode* yparent = NULL;
    
    void dfs(TreeNode* root, int x, int y, TreeNode* parent, int depth){
        if (root == NULL)
            return;
        if (root -> val == x){
            xparent = parent;
            xdepth = depth;
        }
        else if (root -> val == y){
            yparent = parent;
            ydepth = depth;
        }
        else{
            dfs(root -> left, x, y, root, depth + 1);
            dfs(root -> right, x, y, root, depth + 1);
        }
    }
    
    bool isCousins(TreeNode* root, int x, int y) {
        dfs(root, x, y, NULL, 0);
        
        return (xdepth == ydepth) && (xparent != yparent);
    }
};