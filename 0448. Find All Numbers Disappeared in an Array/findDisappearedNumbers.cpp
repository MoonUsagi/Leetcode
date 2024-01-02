class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        /*
        sort(nums.begin(),nums.end());
        vector<int> out;
        
        for(int i=1;i<nums.size();i++)
        {
            if(i != nums[i-1])
            {
                out.push_back(i);
            }
        }
        return out;
        */
        unordered_map<int,int> map;
        vector<int> out;
        
        for(auto num:nums)
        {
            map[num]++;
        }
        for(auto i =1;i<=nums.size();i++)
        {
            if(0 == map[i])
            {
                out.push_back(i);
            }
        }
        return out;
    }
};