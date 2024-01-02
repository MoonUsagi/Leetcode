class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {
        
        unordered_map<char, int> map;

        for(int i = 0; i < order.size(); i ++)
        {
            map[order[i]] = i;
            cout << map[order[i]];
        }
            
        for(string&word: words)
        {
            for(char& c: word)
            {
                c = map[c];
                cout << c;
            }
        }
        for(int i = 1; i < words.size(); i ++)
        {
            if(words[i - 1] > words[i]) return false;
        }
        return true;
    }
};