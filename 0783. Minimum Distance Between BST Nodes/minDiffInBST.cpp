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
    int minDiffInBST(TreeNode* root) {
        int minDiff = INT_MAX;
        int prevVal = -1;
        traverse(root, prevVal, minDiff);
        return minDiff;
    }
    
    void traverse(TreeNode* node, int& prevVal, int& minDiff) {
        if (!node) {
            return;
        }
        
        traverse(node->left, prevVal, minDiff);
        
        if (prevVal != -1) {
            minDiff = min(minDiff, node->val - prevVal);
        }
        prevVal = node->val;
        
        traverse(node->right, prevVal, minDiff);
    }
};