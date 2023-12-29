class Solution {
public:
    /*
    vector<int> searchRange(vector<int>& nums, int target) {
        int right = nums.size();
        int left = 0;
        
        if(target < nums[0]) return {-1,-1};
        if(target > nums[nums.size() -1]) return {-1,-1};
        
        for(int i =0; i< nums.size(); i++)
        {
            if(target == nums[i])
            {
                left = i;
            }
            if(target > nums[i] && target <= nums[i-1])
            {
                right = i;
            }
        }
        
        if(left >= 1 && right >=1)
        {
            vector<int> out(0);
            for(int i=left; i<=right;i++)
            {
                out.push_back(i);
            }
            return out;
        }
        else
        {
            return {-1,-1};
    
        }
    }
    */
vector<int> searchRange(vector<int>& nums, int target) {
        int idx1 = lower_bound(nums, target);
        int idx2 = lower_bound(nums, target+1)-1;
        if (idx1 <= idx2)
            return {idx1, idx2};
        else
            return {-1, -1};
    }
private:
    int lower_bound(vector<int>& nums, int target) {
        int l = 0, r = nums.size()-1;
        while (l <= r) {
            int mid = (r+l)/2;
            if (nums[mid] < target)
                l = mid+1;
            else
                r = mid-1;
        }
        return l;
    }
};
