class Solution {
public:
    int hammingDistance(int x, int y) {
        //int z = x ^ y;
        //return z;
        return __builtin_popcount(x ^ y);
    }
};