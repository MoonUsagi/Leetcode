class Solution {
public:
    string toLowerCase(string s) {
        //string res;
        transform(s.begin(),s.end(),s.begin(),::tolower); //::tolower
        return s;
    }
};

//  tolower 有些編譯器會編譯錯誤