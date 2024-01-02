class Solution {
public:
    int smallestEvenMultiple(int n) 
    {
        int res = n;
        if(n%2 != 0)
        {
            res = n*2;
        }
        return res;
    }
};