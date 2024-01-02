class Solution {
public:
    bool wordPattern(string pattern, string s) 
    {
        
        unordered_map<char,string> m;
        //特殊用法
        istringstream in(s);

        int i = 0; 
        int patternSize =  pattern.size();

        for(string word; in >> word; i++)
        {
            if(i >=patternSize) continue;
            if(m.count(pattern[i]))
            {
                if(m[pattern[i]] != word) return false;
            }
            else
            {
                for(auto j:m)
                {
                    if(j.second == word) return false;
                }
                m[pattern[i]] = word;
            }
        }
        return i == patternSize;
    }
};