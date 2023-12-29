class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int count = 0;
        for(int i=0; i<nums.size();i++)
        {
            if(nums[i] != val) 
            {   
                //nums.erase(nums.begin()+1);
                //count = count+1;
                nums[count++] = nums[i];
            }
        }
        return count;
    }
};