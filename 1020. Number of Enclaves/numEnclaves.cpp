class Solution {
public:
    int numEnclaves(vector<vector<int>>& grid) {
         int res = 0;
         int x = grid.size();
         int y = grid[0].size();

         for(int i=0; i<x; i++)
         {
            for(int j=0; j<y; j++)
            {
                //上跟與左邊界 || 下邊界 || 右邊界
                if(i * j == 0 || i == x- 1 || j == y - 1)
                {
                    sub(grid,i,j);
                }
                
            }
         }

        for (int i=0; i<x; i++) 
        {
            for (int j=0; j<y; j++) 
            {
                if (grid[i][j] == 1) res++;
            }
        }
        return res;

    }
    void sub(vector<vector<int>>& grid, int i, int j) 
    {
        //
        if (i < 0 || i >= grid.size() || j < 0 || j >= grid[0].size() || grid[i][j] != 1) return;
        grid[i][j] = 0;
        sub(grid, i + 1, j);
        sub(grid, i - 1, j);
        sub(grid, i, j + 1);
        sub(grid, i, j - 1);
    }
};