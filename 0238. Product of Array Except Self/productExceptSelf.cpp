class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        std::vector<int> result(n, 1); // 初始化結果向量，所有元素都設置為1

        // 先計算每個元素左側的乘積
        int leftProduct = 1;
        for (int i = 0; i < n; ++i) 
        {
            result[i] *= leftProduct;
            leftProduct *= nums[i];
        }

        // 再計算每個元素右側的乘積
        int rightProduct = 1;
        for (int i = n - 1; i >= 0; --i) 
        {
            result[i] *= rightProduct;
            rightProduct *= nums[i];
        }

        return result;
    }
};