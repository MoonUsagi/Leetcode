class Solution {
public:

    bool isPalindrome(string s) {
        int left = 0;
        int right = s.length() - 1;

    while (left < right) 
    {
        // 檢查是否是有效的字母或數字
        /*
        while (left < right && !isalnum(s[left])) 
        {
            left++;
        }
        while (left < right && !isalnum(s[right])) 
        {
            right--;
        }
        */
        if(!isalnum(s[left]))
        { 
            left++;
        }

        else if(!isalnum(s[right]))
        { 
            right--;
        }

        // 轉小寫並比較
        else if (tolower(s[left]) != tolower(s[right])) 
        {
            return false;  // 不相等，不是回文
        }

        else
        {
        left++;
        right--;
        }
    }

    return true;  
    }
};