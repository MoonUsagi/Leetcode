class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        
        vector<int> result;
        int m = matrix.size();
        int n = matrix[0].size();
        
        int row1 = 0;
        int row2 = m - 1;
        int col1 = 0;
        int col2 = n - 1;
        
        while (row1 <= row2 && col1 <= col2) 
        {
            for (int c = col1; c <= col2; ++c) 
            {
                result.push_back(matrix[row1][c]);
            }
            for (int r = row1 + 1; r <= row2; ++r) 
            {
                result.push_back(matrix[r][col2]);
            }
                if (row1 < row2 && col1 < col2) 
                {
                    for (int c = col2 - 1; c > col1; --c) 
                    {
                        result.push_back(matrix[row2][c]);
                    }
                    for (int r = row2; r > row1; --r) 
                    {
                    result.push_back(matrix[r][col1]);
                    }
                }
                row1++;
                row2--;
                col1++;
                col2--;
        }
        return result;
    }
};