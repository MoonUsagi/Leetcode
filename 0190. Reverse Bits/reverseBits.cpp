class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t out = 0;
        for(int i = 1;i<=32;i++)
        {
            if(n&1 ==1)
            {
                out = (out <<1) +1;
            }
            else
            {
                out = out<<1;
            }
            n = n >> 1;
        }
        return out;
    }
};