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
    int maxDepth(TreeNode* root) {
        if(root == NULL) return 0;
        //if (!root) return 0;
        
        int l = maxDepth(root->left);
        int r = maxDepth(root->right);
        return max(l, r) + 1;
        
        /*
        while(root>=1)
        {
            count = count+1;
            root = root/2;      
        }
        return count+1;
        */
    }
};