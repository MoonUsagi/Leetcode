class Solution {
public:
    int findMin(vector<int>& nums) {
        //int temp;
        if(nums[0] <= nums.back()) return nums[0]; 
        for(int num:nums) 
        {
            if (num < nums[0]) return num;
        }
        return -1;
    }
};