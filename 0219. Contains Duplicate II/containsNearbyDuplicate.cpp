class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        
        std::unordered_map<int, int> numsMap;
        
        for (int i = 0; i < nums.size(); i++) 
        {
        // 掃描跟計算
            if (numsMap.find(nums[i]) != numsMap.end() && i - numsMap[nums[i]] <= k) 
            {
                return true;
            }
        //更新
        numsMap[nums[i]] = i;
        }

    return false;
    }
};