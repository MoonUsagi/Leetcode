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
    bool isSymmetric(TreeNode* root) 
    {
        if (root == NULL)
            return true;
        else
            return symmetricTree(root->left, root->right);
    }
    bool symmetricTree(TreeNode* left,TreeNode* right)
    {
        if(!left && !right) return true;
        if(!left || !right) return false;
        //if(left == right) return true;
        //if(left != right) return false;
        //迭代
        return left->val == right->val
            && symmetricTree(left->left, right->right) 
            && symmetricTree(left->right,right->left);
    }
        
        
};