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
    /*
    bool isValidBST(TreeNode* root) 
    {
        //return root->val <
        return isValidBST(root, LONG_MIN, LONG_MAX);
    }
    
    bool isValidBST(TreeNode* root, long mn, long mx) 
    {
        if (!root) return true;
        if (root->val <= mn || root->val >= mx) return false;
        return isValidBST(root->left, mn, root->val) && isValidBST(root->right, root->val, mx);0
    }
    */
    
    bool isValidBST(TreeNode* root) 
    {
        TreeNode *top = NULL;
        return BSTrun(root, top);
    }
        
    bool BSTrun(TreeNode* node, TreeNode*& top) 
    {
        if (!node) return true;
        bool res = BSTrun(node->left, top);
        if (!res) return false;
        if (top) 
        {
            if (node->val <= top->val) return false;
        }
        top = node;
        return BSTrun(node->right, top);
    }
};