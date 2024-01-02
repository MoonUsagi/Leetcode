class Solution {
public:
    int maximum69Number (int num) {
        stack<int> st;
        int res = 0;
        bool chang = false;
        while(num)
        {
            st.push(num % 10);
            num /= 10;
        }

        while(!st.empty())
        {
            if(st.top() == 6 && !chang)
            {
                res = res * 10 + 9;
                chang = true;
            }
            else
                res = res * 10 + st.top();
            
            st.pop();
        }
        
        return res;
    }
};