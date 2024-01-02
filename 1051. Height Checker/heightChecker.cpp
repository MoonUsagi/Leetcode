class Solution {
public:
    int heightChecker(vector<int>& heights) {
        
        //vector<int>& sorh = heights;
        vector<int> sorh(heights);
        sort(begin(sorh), end(sorh));
        int out = 0;
        for(int i=0;i<heights.size();i++)
        {
            out += (heights[i] != sorh[i]);
        }
        
        return out;
    }
};