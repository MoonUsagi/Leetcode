class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs){
        
        vector<vector<string>> res;
        unordered_map<string, int> m;
        
        for (string str : strs) 
        {
            //排序t = str
            string t = str;
            sort(t.begin(), t.end());
            //排map裡找t
            if (!m.count(t)) 
            {
                //看還有沒剩餘
                m[t] = res.size();
                res.push_back({});
            }
            res[m[t]].push_back(str);
        }
        return res;
    }
};