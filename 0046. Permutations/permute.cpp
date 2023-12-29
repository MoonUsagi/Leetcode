class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        std::vector<int> perm;
        std::vector<std::vector<int>> result;
        std::vector<bool> visisted(nums.size(), false);
        iterate(nums, perm, result, visisted);
        return result;        
    }
    
private:
    void iterate(const std::vector<int>& nums, std::vector<int> perm,           std::vector<std::vector<int>>& result, std::vector<bool> visisted) 
    {
        if (perm.size() == nums.size()) 
        {
            result.push_back(perm);
            return;
        }

        for (int i = 0; i < nums.size(); ++i) 
        {
            if (!visisted[i]) 
            {
                perm.push_back(nums[i]);
                visisted[i] = true;
                iterate(nums, perm, result, visisted);
                perm.pop_back();
                visisted[i] = false;
            }
        }
    }   
    
};