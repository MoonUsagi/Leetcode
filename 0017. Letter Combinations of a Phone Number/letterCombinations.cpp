class Solution {
public:
    vector<string> letterCombinations(string digits) {
        if (digits.empty()) return {};
        
        vector<vector<char>> n(10);
        n[0] = {' '};
        n[1] = {};
        n[2] = {'a','b','c'};
        n[3] = {'d','e','f'};
        n[4] = {'g','h','i'};
        n[5] = {'j','k','l'};
        n[6] = {'m','n','o'};
        n[7] = {'p','q','r','s'};
        n[8] = {'t','u','v'};
        n[9] = {'w','x','y','z'};
        
        vector<string> ans{""};
        for (char digit : digits) {
            vector<string> tmp;
            for (const string& s : ans)
               for (char c : n[digit - '0'])
                    tmp.push_back(s + c);
            ans.swap(tmp);
        }
        return ans;
    }
};