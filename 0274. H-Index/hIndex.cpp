class Solution {
public:
    int hIndex(vector<int>& citations) {
    // 大到小排序
    sort(citations.begin(), citations.end(), greater<int>());
    int h = 0;
    
    for (int i = 0; i < citations.size(); i++) 
    {
        if (citations[i] >= i + 1) 
        {
            h = i + 1;
        }
        else 
        {
            break;
        }
    }
    return h;
    }
};