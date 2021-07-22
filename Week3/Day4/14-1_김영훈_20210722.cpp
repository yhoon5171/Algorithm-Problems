//https://leetcode.com/problems/leaf-similar-trees/

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
    vector<int> root1_leaf;
    vector<int> root2_leaf;
    
    void lookForLeaf(TreeNode *node, vector<int> &root_leaf){
        if (node == NULL)
            return;
        
        if (node -> left == NULL && node -> right == NULL){
            root_leaf.push_back(node -> val);
            return;
        }
        lookForLeaf(node -> left, root_leaf);
        lookForLeaf(node -> right, root_leaf);
    }
    
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        lookForLeaf(root1, root1_leaf);
        lookForLeaf(root2, root2_leaf);
        
        if (root1_leaf == root2_leaf)
            return true;
        else return false;
    }
};