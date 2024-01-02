class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> map;
        for (auto num : nums)
        {
            if (!map.insert(num).second) 
                return true;
        }
        return false;
    }
};