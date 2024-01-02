class Solution {
public:
    int countOdds(int low, int high) {
        //if(low == high && (high%2)==0) return 0;
        //if(low == high && (high%2)==1) return 1;

        int res = (high-low+1)/2;
        if(high%2 == 1 && low%2 == 1)
        { 
            res++;
        }
        return res;
    }
};