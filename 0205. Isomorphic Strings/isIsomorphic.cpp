class Solution {
public:
    bool isIsomorphic(string s, string t) {
        
        unordered_map<char, char> st1, st2;
        
        for(int i=0; i<s.length();i++)
        {
            // 儲存s到t得映射值
            if(st1[s[i]] == 0)  //如果st1中s[i]尚未有映射，則設置映射值為t[i]
            {
                st1[s[i]] = t[i];   // 如果s[i]已經有映射，但映射值不等於t[i]，則返回false，因為這違反了同構的規則
            }
            else if(st1[s[i]] != t[i])
            return false;

            // 儲存t到s得映射值
            if(st2[t[i]] == 0)
            {
                st2[t[i]] = s[i];
            }
            else if(st2[t[i]] != s[i])
            return false;
        }

        return true;
    }
};

// if (mp[s[i]] && mp[s[i]]!=t[i]) return false;
// if (mp2[t[i]] && mp2[t[i]]!=s[i]) return false;
// mp[s[i]]=t[i];
// mp2[t[i]]=s[i];