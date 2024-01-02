class Solution {
public:
    int numSimilarGroups(vector<string>& strs) {
        int n = strs.size(); // 獲取字符串列表 strs 的長度
        int res = 0; // 用於計數

        // 建立一個并查集，初始化每個單詞都為自己的父節點
        vector<int> parent(n, 0);
        for (int i = 0; i < n; i++) {
            parent[i] = i;
        }

        // 對於列表中的每對單詞，如果它們相似，則將它們合併到同一個組中
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (isSimilar(strs[i], strs[j])) {
                    int root1 = find(parent, i); // 獲取單詞 i 的父節點
                    int root2 = find(parent, j); // 獲取單詞 j 的父節點
                    if (root1 != root2) { // 如果兩個單詞不在同一個組中，則合併它們
                        parent[root2] = root1;
                    }
                }
            }
        }

        // 統計不同的父節點數量，即為所求
        for (int i = 0; i < n; i++) {
            if (parent[i] == i) { // 如果當前單詞是它所在組的代表，則組數加一0
                res++;
            }
        }

        return res;
    }

private:
    // 判斷兩個字符串是否相似
    bool isSimilar(string s1, string s2) {
        int cnt = 0; // 用於計數不同的字符數量
        for (int i = 0; i < s1.size(); i++) {
            if (s1[i] != s2[i]) { // 如果 s1 和 s2 在位置 i 上的字符不同
                cnt++;
                if (cnt > 2) { // 如果不同的字符數量已經超過了 2，則它們一定不相似
                    return false;
                }
            }
        }
        return true; // 如果不同的字符數量小於等於 2，則它們相似
    }

    // 查找單詞 i 的父節點
    int find(vector<int>& parent, int i) {
        if (parent[i] == i) {
            return i;
        }
        return parent[i] = find(parent, parent[i]); // 路徑壓縮，將 i 的父節點設為根節點
    }
    
};