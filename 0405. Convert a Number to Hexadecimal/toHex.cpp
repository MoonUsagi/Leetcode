class Solution {
public:
    string toHex(int num) {
        uint n = num;
        string hexstr = "0123456789abcdef";
        string res = "";
        do 
        {
            res = hexstr[n%16] + res;
            n/= 16;   
        }
        while(n);
        return res;
    }
};