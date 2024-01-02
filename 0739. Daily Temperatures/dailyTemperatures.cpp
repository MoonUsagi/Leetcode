class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
            stack<int> st;
            vector<int> res = vector<int>(temperatures.size(), 0);
            for(int i = 0 ; i < temperatures.size();i++)
            {
                while(!st.empty())
                {
                    if(temperatures[i] > temperatures[st.top()])
                    {
                        res[st.top()] = i - st.top();
                        st.pop();
                    }
                     else
                    {
                        break;
                    }
                }   
                st.push(i);
            } 
            return res;
            };
};