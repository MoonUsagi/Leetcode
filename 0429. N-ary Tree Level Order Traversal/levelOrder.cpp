/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        vector<vector<int>> res;
        subfcn(root,0,res);
        return res;
    }

    void subfcn(Node* node, int lv ,vector<vector<int>>&res)
    {
        if(!node) return;
        //if()root == nullptr) return res;
        
        if(res.size() <= lv) res.resize(res.size()+1);
        res[lv].push_back(node->val);
        
        for (auto a : node->children) 
        {
            subfcn(a, lv + 1, res);
        }
    }




};