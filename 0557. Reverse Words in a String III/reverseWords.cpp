class Solution {
public:
    string reverseWords(string s) {
        /*
        stringstream ss(s);
        string temp,ans;
        while(ss >> temp)
        {
        reverse(temp.begin(),temp.end());
        ans += (temp+" ");
        }
        return ans.substr(0,ans.size()-1);
    }
        */

    int index = 0;  
    for (int i = 0; i <= s.length(); i++) 
    {
      if (i == s.length() || s[i] == ' ') 
      {
        reverse(s.begin() + index, s.begin() + i);
        index = i + 1;
      }
    }
    return s;
    }
};