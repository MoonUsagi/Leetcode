class Solution {
public:
    int longestPalindromeSubseq(string s) {
        int res =0;
        vector<int> dp(s.size(),1);
        
        for(int i= s.size()-1;i>=0 ;i--)
        {
            int x = 0;
            for(int j = i+1;j<s.size();j++)
            {
                int y = dp[j];
                if(s[i] == s[j])
                {
                    dp[j] = x+2; 
                }
                x = max(x,y);
            }
        }
        for(int n:dp)
        {
            res = max(res,n);
        }
        return res;

    }
};