class Solution {
public:
    bool isSubsequence(string s, string t) {
        if (s.empty()) return true;
        
        int  i= 0;
        
        for(int j=0; j<t.size(); j++)
        {
            if(s[i] == t[j])
            {
                i++;
            }
            if(s.size() == i) return true;
        }
        return false;
    }
};