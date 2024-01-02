// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution 
{
public:
    int firstBadVersion(int n) 
    {
        //剖半搜尋，直到找到false
        int a = 1;
        int b = n; 
        while(a < b)
        {
            // 重點
            int c = a + (b - a) / 2;
            //int c = a + (b - 1) / 2;
            //int c = a+b/2;
            printf("%d", c);
            if(isBadVersion(c))
                b = c;
            else
                a = c+1;
        }
        return a;
    }
    
};

