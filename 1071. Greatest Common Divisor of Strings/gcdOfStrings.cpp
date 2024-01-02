class Solution {
public:
    string gcdOfStrings(string str1, string str2) {

        if (str1 + str2 != str2 + str1) 
        {
            return "";
        }
        //最大公因數(GCD
        int gcdL = gcd(str1.size(), str2.size());

        return str1.substr(0, gcdL);
    }
};
        //substr 
        //string a="123456789";
        //cout<<a.substr(2,5)<<endl;
        //34567

        //cout<<a.substr(2)<<endl;
        //3456789