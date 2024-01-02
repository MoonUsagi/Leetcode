class Solution {
public:
    string removeStars(string s) {
       stack<char> res;
       for(int i=0; i<s.size();i++)
       {
           char c = s[i];
           if(c == '*')
           {
               res.pop();
           }
           else
           res.push(c);
       }

        string stres = "";
        while(!res.empty())
        {
            // +=
            stres += res.top();
            res.pop();
        }
        reverse(stres.begin(),stres.end());
        return stres;
    }
};


/*
 string res;
        for(int i=0; i<s.size();i++)
        {
            if (i != '*')
            {
                res += s[i];
            }
            if (i == '*')
            {
                res <<= s[i-1];
            } 
        }
        retuen res;
*/