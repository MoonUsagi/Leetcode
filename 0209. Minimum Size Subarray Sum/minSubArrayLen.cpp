class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
    int left = 0;    
    int sum = 0;     
    int minLen = INT_MAX;  //初始化最小尺寸為最大整數

    for (int right = 0; right < nums.size(); right++) 
    {
        sum += nums[right];  // 增加當前的和
        // 當和大於或等於目標時，縮小尺寸
        while (sum >= target) 
        {
            minLen = min(minLen, right - left + 1);  // 更新最小尺寸
            sum -= nums[left];  // 減小左端點縮小尺寸
            left++;  // 移動左端點
        }
    }
    // 找不到滿足條件，返回0
    return (minLen == INT_MAX) ? 0 : minLen;
    }
};