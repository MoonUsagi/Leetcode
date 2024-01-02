class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> res(nums.size());
        res[0] = nums[0];
        for(int i = 1; i<nums.size();i++)
        {
            int temp = 0;
            for(int j = i; j>=0; --j)
            {
                temp = temp + nums[j];
            }
                res[i] = temp;
        }
        return res;
    }
};

// for(int i=1; i<nums.size(); i++){
// res[i] = res[i-1] + nums[i];