class Solution {
public:
    int maxArea(vector<int>& height) {
        /*
        vector<int> stepsum = height;
        int wall = 0;
        int total = 0;
        int area = 0;
        for(int i=0; i <height.size()-1;i++)
        {
            for(int j = height.size()-1; j > i; j--)
            {
                wall = min(height[i], height[j]);
                area = wall*abs(j-i);
                if(area > total) total = area;
            }
        }
        return total;
        */
    
        int res = 0, i = 0, j = height.size() - 1;
        while (i < j) 
        {
            res = max(res, min(height[i], height[j]) * (j - i));
            height[i] < height[j] ? ++i : --j;
        }
        return res;

    };
};