class Solution {
public:
    int arraySign(vector<int>& nums) {
        int n = nums.size();
        double res = 1;
        for(int i = 0; i<n; i++)
        {
            if(nums[i] < 0)
                res *=-1;
            if(nums[i] ==0)
                return 0;
        }
        return res;    
        }
};