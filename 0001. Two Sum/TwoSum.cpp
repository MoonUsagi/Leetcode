class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int a = 0;
        int b = 0;
        
        for(int i =0;i<nums.size();i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                int temp;
                temp = nums[i] + nums[j];
                if(temp == target)
                {
                    a = i;
                    b = j;
                }    
            }
            
        }
         return {b,a};
    }
};