class Solution {
public:
    char findTheDifference(string s, string t) {
        int  a = 0;
        for(int i =0; i < s.size();i++)
        {               
                a += t[i]-s[i];
    
        }
        // int h = t.size();
        // a += t[h-1];
        a += t.back();
        
        return char(a);
    }
};