class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        sort(tasks.begin(), tasks.end());
        int result = 0, i, j;
        for(i=0; i<tasks.size(); ++i){
            for(j=i+1; j<tasks.size(); ++j)
                if(tasks[i]!=tasks[j]) break;
            
            j = j-i;
            if(j==1) return -1;

            result += j/3;
            if(j%3)
                ++result;

            i += (j-1);
        }
        return result;
    }
};