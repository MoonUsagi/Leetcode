class Solution {
vector<vector<int>> out;
vector<int> tmp;
    
    void DFS(int idx,int n, int k)
    {
        if(tmp.size()==k)
        {
            out.push_back(tmp);
            return;
        }
        for(int i =idx; i<=n;i++)
        {
            tmp.push_back(i);
            DFS(i+1,n,k);
            tmp.pop_back();
        }
    
    }
    public:
    vector<vector<int>> combine(int n, int k) {
        DFS(1,n,k);
        return out;
    }
};