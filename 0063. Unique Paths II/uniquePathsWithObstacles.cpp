class Solution {

public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        
    int m = obstacleGrid.size();
    int n = obstacleGrid[0].size();
    
    // 初始化一個二維向量 dp，所有元素設為 0
    vector<vector<int>> dp(m, vector<int>(n, 0));
    
    // 初始化第一個單元格 dp[0][0]
    dp[0][0] = (obstacleGrid[0][0] == 0) ? 1 : 0;
    
    // 初始化第一列 dp[i][0] column
    for (int i = 1; i < m; i++) 
    {
        if (obstacleGrid[i][0] == 0) 
        {
            dp[i][0] = dp[i-1][0];
        }
    }
    
    // 初始化第一行 dp[0][j] row
    for (int j = 1; j < n; j++) 
    {
        if (obstacleGrid[0][j] == 0) 
        {
            dp[0][j] = dp[0][j-1];
        }
    }
    
    // 填充 dp 陣列
    for (int i = 1; i < m; i++) 
    {
        for (int j = 1; j < n; j++) 
        {
            if (obstacleGrid[i][j] == 0) 
            {
                dp[i][j] = dp[i-1][j] + dp[i][j-1];
            } 
            else 
            {
                dp[i][j] = 0; //如果有障礙物，則無法通過的路徑數為 0
            }
        }
    }
    cout << '122';
    // 結果存儲在 dp[m-1][n-1] 中
    return dp[m-1][n-1];
    }
};