class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {

        vector<int> res;
        for(int j=0; j<n;j++)
        {
            res.push_back(nums[j]);
            res.push_back(nums[j+n]);
        }
        return res;
    }
};