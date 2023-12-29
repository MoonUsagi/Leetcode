class Solution {
public:
    int removeDuplicates(vector<int>& nums) {      
        int len = 1;

        for (int i = 1; i < nums.size(); ++i) 
        {
            if (nums[i] != nums[i - 1]) 
            {
                nums[len] = nums[i];
                len++;
            }
        }
        return len;
    }
};