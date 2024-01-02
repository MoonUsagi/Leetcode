class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        if(nums[0]!=0) return 0;
        //int size = nums.size();
        //if(nums[nums.size() -1] == nums.size()) return nums.size();
        //if(nums[nums.size() -1] == nums.size()-1) return nums.size();
        for(int i = 1; i<nums.size();i++)
        {
            int temp;
            temp = nums[i] - nums[i-1];
            if(temp != 1) return nums[i-1]+1;
        }
        
        return nums.size();
    }
};