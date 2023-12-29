class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int out = 0;
        for(int i = 0; i<nums.size(); i++)
        {
            //if(target <= nums[i] && target > nums[i-1])
            if(nums[i] >= target)
                return i;          
        }
        return nums.size();
    }
};