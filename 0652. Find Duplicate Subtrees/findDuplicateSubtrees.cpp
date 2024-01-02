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
    vector<TreeNode*> findDuplicateSubtrees(TreeNode* root) 
    {
        unordered_map<string, int> counter;
        vector<TreeNode*> res;
        dfs(root, counter, res);
        return res;
    }
    
    string dfs(TreeNode* node, unordered_map<string, int>& counter,  vector<TreeNode*>& res) 
    {
        if (!node) return "#";
        
        string subtree = to_string(node->val) + "," + dfs(node->left, counter, res) + "," + dfs(node->right, counter, res);    
        
        if (counter[subtree]++ == 1) 
        {
            res.push_back(node);
        }
        return subtree;
    }
};