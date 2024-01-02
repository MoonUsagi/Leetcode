/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        vector<int>res;
        unordered_map<int, TreeNode*> map;
        queue<TreeNode*> q;
        q.push(root);

        //掃一變拿順序
        while(!q.empty())
        {
            int qsize = q.size();
            for(int i = 0; i < qsize; i++)
            {
                auto top = q.front();
                q.pop();

                if(top -> left)
                {
                    map[top->left->val] = top;
                    q.push(top->left); 
                }

                if(top -> right)
                {
                    map[top->right->val] = top;
                    q.push(top->right); 
                }
            }
        }

        //根據步伐來掃
        unordered_map<int, int> anotherMap;
        q.push(target);
        while(k-- && !q.empty())
        {
            int size = q.size();

            for(int i = 0; i < size; i++)
            {
                auto top = q.front();
                q.pop();

                anotherMap[top -> val] = 1;

                if(top -> left && !anotherMap[top->left->val])
                {
                    q.push(top -> left);
                }

                if(top -> right && !anotherMap[top->right->val])
                {
                    q.push(top -> right);
                }

                if(map[top->val] && !anotherMap[map[top->val] -> val])
                {
                    q.push(map[top->val]);
                }

            }
        }

        while(!q.empty())
        {
            res.push_back(q.front()->val);
            q.pop();
        }
        return res;
    }
};