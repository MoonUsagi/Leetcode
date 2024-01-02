class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        int res = 0;
        int x = strs.size();
        int y = strs[0].size();
    
    for(int i=0; i<strs[0].size(); i++)
    {
        //字串長度
        for(int j=1; j<strs.size(); j++)
        {
            //每個字元
            if(strs[j][i] < strs[j-1][i]) 
            {
                res++;
                break;
            }
        }
    }
    return res;
    }
};
