class Solution {
public:
    
    //Boyer–Moore majority vote algorithm
    int majorityElement(vector<int>& nums) {      
        int ans =0;
        if (nums.size() <= 1)
        {
            return  ans = nums[0];
        }
        
        int candidate = 0; 
        int count = 0;
        
        for(int num:nums)
        {
            if(count == 0)
            {
               candidate = num;
               count = 1;
            }
            
            else if(candidate == num)
            {
                count++;
            }
            else
            {
                count--;
            }
        }
        return candidate;
    }
};