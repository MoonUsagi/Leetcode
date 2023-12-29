class Solution {
public:
    string addBinary(string a, string b) {
        string res ="";
        int abSum = 0;
        int aSize = a.size()-1;
        int bSize = b.size()-1;

        while (aSize >= 0 || bSize >= 0 || abSum > 0)
        {
            int bitA = (aSize >= 0) ? a[aSize] - '0' : 0;
            int bitB = (bSize>= 0) ? b[bSize] - '0' : 0;
            int sum = bitA + bitB + abSum;

            res = to_string(sum % 2) + res;
            abSum = sum / 2;

            aSize--;
            bSize--;

        }
            return res;
    }
};