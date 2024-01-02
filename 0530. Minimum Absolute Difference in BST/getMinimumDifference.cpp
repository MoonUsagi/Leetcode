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
    int res{INT_MAX};
    TreeNode* x;

    int getMinimumDifference(TreeNode* root) 
    {
        if(!root) return 0;
         getMinimumDifference(root->left);
         if(x) res = min(res, root->val - x->val );
         x = root;
         getMinimumDifference(root->right);
         return res;
    }
};