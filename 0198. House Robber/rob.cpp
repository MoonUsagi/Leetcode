class Solution {
public:
    int rob(vector<int>& nums) {
        //找最大，再間隔抓
        if (nums.empty()) return 0;
        if(nums.size() <= 1) return nums[0];
        
        int a = nums[0], b =max(a, nums[1]);
        
        for(int i =2; i< nums.size();i++)
        {
            int t = b;
            b = max(a + nums[i],b);
            a = t;
        }
        return b;
    }
};