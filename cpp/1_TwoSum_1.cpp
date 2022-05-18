#include <iostream>
#include <vector>


class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {
        int a = 0;
        int b = 0;

        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = i + 1; j < nums.size(); j++)
            {
                int temp;
                temp = nums[i] + nums[j];
                if (temp == target)
                {
                    a = i;
                    b = j;
                }
            }
        }
        return { a,b };
    }
};

/*
int main(void)
{
    std::vector<int> nums{ 1,2,3,4 };
    int target = 7;
    Solution t1;
    for (int &x : t1.twoSum(nums, target))
        std::cout << nums[x] << " ";
    std::cout << '\n';

    system("pause");
    return 0;
}
*/
