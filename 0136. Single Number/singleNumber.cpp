class Solution {
public:
    int singleNumber(vector<int>& nums) {
        
        if (nums.size()<0)
        return 0;
        
        int a =0;
        
        for(int i=0; i<nums.size();i++)
        {
            a ^= nums[i];
        }
        return a;
    }
};