class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        /*
        for (auto x : matrix) 
        {
            for (auto key : x) 
            {
                if (key == target) 
                {
                    return true;
                }
            }
        }
        return false;
        */
        
        int m = matrix.size();
        int n = matrix[0].size();
        int i = 0;
        int j = n-1;

        while(m > i && j >=0)
        {
            if(matrix[i][j]==target) 
                return true;
            // matrix[i][j] > target ? j-- : i++;
            if(matrix[i][j] > target) j--;
            else i++;
        }
        return false;
        
    }
};