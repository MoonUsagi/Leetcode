class Solution {
public:
    int numTrees(int n) {
    /*     
    long out = 1;
    // C(2n,n)/(n+1)
    for(int i = n + 1; i <= 2 * n; i++) 
    {
        out = out * i / (i - n);
    }
        return out / (n + 1);
        
    }
    */
    
    vector<int> dp(n + 1);
    dp[0] = dp[1] = 1;
    for (int i = 2; i <= n; ++i) 
    {
        for (int j = 0; j < i; ++j) 
        {
            dp[i] += dp[j] * dp[i - j - 1];
        }
    }
        return dp[n];
    }
    
    
};