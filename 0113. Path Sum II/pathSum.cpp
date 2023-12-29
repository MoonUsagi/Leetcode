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
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>> res;
        vector<int> output;
        subfcn(root,targetSum,output,res);
        return res;
    }

    //DFS 標準型寫法
    //深度搜索，保存一維vector的路徑，不對就移除，正確就放進二維vector中
    void subfcn(TreeNode* node,int targetSum, vector<int>& output,vector<vector<int>>& res)
    {
        if(!node) return;
        output.push_back(node -> val);

        if(targetSum == node->val && !node->left && !node->right)
        {
            res.push_back(output);
        }

        subfcn(node -> left, targetSum - node->val, output ,res);
        subfcn(node -> right, targetSum - node->val, output ,res);
        //刪除
        output.pop_back();

    }

};