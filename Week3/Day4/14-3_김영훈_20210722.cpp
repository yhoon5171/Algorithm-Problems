//https://leetcode.com/problems/maximum-depth-of-n-ary-tree/

/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
   
    int maxDepth(Node* root) {
        if (root == NULL)
            return 0;
        int maxNum = 0;
        for (auto node : root -> children){
            maxNum = max(maxNum, maxDepth(node));
        }
                
        return 1 + maxNum;
    }
};