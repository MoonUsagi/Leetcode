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
    void repeat(TreeNode* root, int low, int high, int &res)
    {
        if(root==NULL) return;
        if(root->val <=high && root->val >=low)
        res = res + root->val;
        repeat(root->left,low,high,res);
        repeat(root->right,low,high,res);
    }

    int rangeSumBST(TreeNode* root, int low, int high) {
        
        int res = 0;
        repeat(root,low,high,res);
        return res;
    }
};