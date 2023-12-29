class Solution {
public:
    int hammingWeight(uint32_t n) {
        int out = 0;
        for(int i = 0; i<32; i++)
        {
            out += (n %2);            
            n = n >>1;
            printf("%d", n);
        }
        return out;
    }
};