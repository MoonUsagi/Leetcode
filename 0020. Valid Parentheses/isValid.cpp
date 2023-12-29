class Solution {
public:
    bool isValid(string s) {
        stack<char>sout;
        
        for(int i=0;i<s.length();i++)
        {
            if(sout.empty())
                sout.push(s[i]);
            else if(s[i]==')')
            {
                if( sout.top()!='(' ) return false;
                else sout.pop();
            }
            else if(s[i]=='}')
            {
                if( sout.top()!='{' ) return false;
                else sout.pop();
            }
            else if(s[i]==']')
            {
                if( sout.top()!='[' ) return false;
                else sout.pop();
            }
            else
                sout.push(s[i]);
        }
        if(sout.empty()) return true;
        return false;       