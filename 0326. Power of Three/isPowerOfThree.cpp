class Solution {
public:
    bool isPowerOfThree(int n) {
        
        //while(n % 3 == 0)   n /= 3;
        for (int i = 0; i < n; i++) 
        {
            if(pow(3,i)>n) return false;
            if(pow(3,i) ==n ) return true;
        }
        return false;

    }
};