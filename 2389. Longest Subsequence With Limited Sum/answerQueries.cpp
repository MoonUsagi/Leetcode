class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        /*
        sort(nums.begin(), nums.end());

        vector<int> ft(nums.size()+1);
        for (int i = 0; i < nums.size(); ++i) 
        {
            ft[i + 1] = ft[i] + nums[i];
        }

        vector<int> res(queries.size());
        for (int i = 0; i < queries.size(); ++i) 
        {
            res[i] = upper_bound(ft.begin() + 1, ft.end(), queries[i]) - ft.begin() - 1;
        }
        //從數組的begin位置到end-1位置二分查找第一個大於num的數字，找到返回該數字的地址，不存在則返回end。通過返回的地址減去起始地址
        //begin,得到找到數字在數組中的下標。
        return res;
        */

        sort(begin(nums), end(nums));
        partial_sum(begin(nums), end(nums), begin(nums));
        vector<int> res;
        for (int q : queries)
            res.push_back(upper_bound(begin(nums), end(nums), q) - begin(nums));
        return res;
    }

};