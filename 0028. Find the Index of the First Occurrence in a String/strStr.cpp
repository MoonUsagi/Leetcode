class Solution {
public:
    int strStr(string haystack, string needle) {
        int k = 0;
        for(int i =0; i<haystack.size(); i++)
        {
            if(haystack[i]==needle[k])
            {
                k++;
            }
            else
            {
                i = i - k; //重置i
                k =0;
            }
            if(k == needle.size())
            {
                return i-k+1;
            }
        }
        return -1;
    }
};