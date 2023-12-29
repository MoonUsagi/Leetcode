class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> c = {{'I', 1},{'V', 5},{'X', 10},{'L', 50},{'C', 100},{'D',500},{'M',1000}};
        int result =  c[s[0]];
        for(int i=1;i<s.size();i++)
        {
            //if(i==0||c[s[i]] <= c[s[i - 1]]) 
                result += c[s[i]];
            //else
            if(c[s[i]] > c[s[i - 1]])
                //result += c[s[i]]-2*c[s[i-1]];
                result -= 2*c[s[i-1]];
        }
        return result;
    }
};