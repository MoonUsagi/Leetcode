class Solution {
public:
    int firstUniqChar(string s) {
        for(int i = 0; i<s.size();i++)
        {
            int flag = 1;
            for(int j = 0;j<s.size();j++)
            {
                if(s[i]==s[j] && i!=j)
                {
                    flag = 0;
                    break;
                }
            }
            if(flag==1) return i;
        }
        
           return -1;
    }
};