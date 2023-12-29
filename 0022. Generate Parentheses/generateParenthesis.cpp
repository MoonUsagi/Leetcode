class Solution {
public:
    vector<string> res;
    
    vector<string> generateParenthesis(int n) {
        
        Dfs("",0,0,n);
        return res;
    }
    
    void Dfs(string s, int open ,int close, int n)
    {
        // 括弧數量相同，則跳出
        if(open == n && close == n)
        {
            res.push_back(s);
            return;
        }
        // 括弧小於n
        if(open <n)
        {
            Dfs(s + '(',open+1,close,n);
        }
         // 括弧小於open
        if(close < open)
        {
             Dfs(s + ')',open,close+1,n);
        }
        return;
    }
};