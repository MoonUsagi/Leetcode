class Solution {
public:
    void rotate(vector<int>& nums, int k) {

        int n = nums.size();

        // 算要退幾個
        k = k % n;

        // 倒轉全部
        reverse(nums.begin(), nums.end());

        // 倒轉前ｋ個
        reverse(nums.begin(), nums.begin() + k);

        // 倒轉剩餘的
        reverse(nums.begin() + k, nums.end());
    }
};