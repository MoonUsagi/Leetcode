#include <iostream>
#include <vector>
#include <unordered_map>


class Solution
{
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target)
    {
        std::unordered_map<int, int> d;
        std::vector<int> ret;
        for (size_t i = 0; i < nums.size(); ++i)
        {
            if (d.find(nums[i]) == d.end())
            {
                d[target - nums[i]] = i;
            }
            else
            {
                ret.push_back(d[nums[i]]);
                ret.push_back(i);
                break;
            }
        }
        return ret;
    }


};

/*
int main(void)
{
    std::vector<int> nums{ 1,2,3,4 };
    int target = 7;
    Solution mainfun;

    for (int& x : mainfun.twoSum(nums, target))
        std::cout << nums[x] << " ";
    std::cout << '\n';

    system("pause");
    return 0;
}
*/
