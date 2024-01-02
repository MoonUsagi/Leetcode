class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) 
    {
        vector<int> output(nums.size());
        for (int i = 0; i < nums.size(); ++i)
        {
            for (int j = 0; j < nums.size(); ++j)
            {
                if (i != j && nums[j] < nums[i]) 
                {
                    output[i]++;
                }
            }
        }
        return output;
    }
};