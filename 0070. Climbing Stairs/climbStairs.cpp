class Solution {
public:
    int climbStairs(int n) {
        int a = 1;
        int b = 1;
        if (n <= 2) return n;
        
        for(int i=2; i<=n; i++)
        {   
            int temp = a;
            a = a + b;
            b = temp;
            
        }
        return(a);
    }
};