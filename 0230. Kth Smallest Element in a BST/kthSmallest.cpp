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
    int kthSmallest(TreeNode* root, int k) {
        
        int res = 0;
        DFS(root, k, res);
        return res;
    }

    void DFS(TreeNode* node, int& k, int& res)
    {
        if(res !=0) return;
        if(node)
        {
            DFS(node->left, k, res);
            k--;
            if(k == 0) res = node->val;
            DFS(node->right, k, res);
        }
    }

};