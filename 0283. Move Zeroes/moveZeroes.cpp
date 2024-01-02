class Solution {
public:
    void moveZeroes(vector<int>& nums) 
    {
            int conut = 0;
            for(vector<int>::iterator i = nums.begin(); conut < nums.size(); conut++)
            {
                if(*i == 0)
                {
                   i = nums.erase(i);
                   nums.push_back(0); 
                }
                else
                {
                    i++;
                }
            }
    }

};