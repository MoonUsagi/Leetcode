class Solution {
public:
    bool canJump(vector<int>& nums) {
    int maxReach = 0; // 最遠位置

    // 遍歷數組中的每個值
    for (int i = 0; i < nums.size(); i++) 
    {
        // 防超出，當下的位置不能超過最遠的位置
        if (i > maxReach) 
        {
            return false;
        }
        
        // 更新最遠可以到達的位置
        maxReach = max(maxReach, i + nums[i]);
        
        // 如果最遠的位置已超出，則回true

    }
        return true;
    }
};