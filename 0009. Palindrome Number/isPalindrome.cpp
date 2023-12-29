class Solution {
public
    bool isPalindrome(int x) {

        if (x  0) return false;
        int y = x;
        double reverse = 0;

        while (x != 0)
        {
            reverse = reverse10 +x%10;
            x = x  10;
        }
        return (y == reverse);
    }
};