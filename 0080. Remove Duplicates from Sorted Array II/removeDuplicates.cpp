class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        if(nums.size() < 2)
        {
            return nums.size();
        }
        
        int len = 2;
        for (int i = 2; i < nums.size(); ++i) 
        {
            if(nums[i] != nums[len - 1] ||nums[i] != nums[len - 2]) 
            {
                nums[len] = nums[i];
                len++;
            }
        }
        return len;


    }
};