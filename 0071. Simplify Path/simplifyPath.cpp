class Solution {
public:
    string simplifyPath(string path) {
        //堆疊存
        stack<string> st;
        string res;
        
        //掃整個path
        for(int i = 0;  i<path.size(); i++)
        {
            // 如果是/就開始
            if(path[i] == '/')    
                continue;
            
            //暫存器
            string temp;

            //掃字串，掃到下一個/為止
            while(i < path.size() && path[i] != '/')
            {
				//把單字加入進temp直到底或跳出
                temp += path[i];
                ++i;
            }
            //個別判別:如果是.號就繼續
            if(temp == ".")
                continue;

			////個別判別:如果是..號 st非空就彈出
            else if(temp == "..")
            {
                if(!st.empty())
                    st.pop();
            }
            else
			// 將temp放到stack中
                st.push(temp);
        }
        
		// 將全部的stack放到res
        while(!st.empty())
        {
            res = "/" + st.top() + res;
            st.pop();
        }
        
		// 如果為空
        if(res.size() == 0)
            return "/";
        
        return res;
    }
};