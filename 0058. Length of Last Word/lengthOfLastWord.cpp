class Solution {
public:
    int lengthOfLastWord(string s) {
        reverse(s.begin(), s.end());
        int count = 0;
        int flag = 0;
        for(int i =0; i<s.size();i++)
        {
            if (!isspace(s[i]))
            {
                count++;
                flag = 1;
            }
            if(isspace(s[i]) && flag == 1)
            {
                return count; 
            }
        }
        return count;
    }
};