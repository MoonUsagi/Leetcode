
  Definition for a binary tree node.
  struct TreeNode {
      int val;
      TreeNode left;
      TreeNode right;
      TreeNode()  val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x)  val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode left, TreeNode right)  val(x), left(left), right(right) {}
  };
 
class Solution {
public
    vectorint rightSideView(TreeNode root) 
    {
     
        vectorint ans;
        
        functionvoid(TreeNode, int) dfs = [&](TreeNode root, int d) 
        {
            if (!root) return;
            if (ans.size()  d + 1) ans.push_back(0);
            ans[d] = root-val;
            dfs(root-left, d + 1);
            dfs(root-right, d + 1);
        };
            dfs(root, 0);
            return ans;
    }
    
        vectorint res;
        if (!root) return res;
        queueTreeNode q;
        q.push(root);
        while (!q.empty()) {
            res.push_back(q.back()-val);
            int size = q.size();
            for (int i = 0; i  size; ++i) {
                TreeNode node = q.front();
                q.pop();
                if (node-left) q.push(node-left);
                if (node-right) q.push(node-right);
            }
        }
        return res;
    }
};