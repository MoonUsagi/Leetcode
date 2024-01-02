class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
    unordered_map<char, int> charCount;

    // 掃過雜誌，記錄每個字母出現次數
    for (char c : magazine) 
    {
        charCount[c]++;
    }

    // 掃過勒索信，減少相對字母的出現次數
    for (char c : ransomNote) 
    {
        // 如果該字母在雜誌中不存在或者已經用完了，則無法構成勒索信
        // find會進行搜索，如果沒找到會給一個最後值（就是end)
        if (charCount.find(c) == charCount.end() || charCount[c] == 0) 
        {
            return false;
        }
        // 減少該字母的出現次數
        charCount[c]--;
    }

    // 如果成功掃完所有勒索信中的字母，則可以構成勒索信
    return true;

    };
};