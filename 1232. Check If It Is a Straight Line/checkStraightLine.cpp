class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        int x = coordinates.size();
        int m1 = coordinates[0][0] - coordinates[1][0];
        int n1 = coordinates[0][1] - coordinates[1][1];
        //if( x<= 1 )return true;
        //if(n1 ==0 || m1 ==0 )return false;
        //double n1 = temp/m1;

        for(int i =2; i<x; i++)
        {
            int m = coordinates[i][0] - coordinates[0][0];
            int n = coordinates[i][1] - coordinates[0][1];

            if(n*m1 != (n1*m))  return false;
        }
        return true;
    }
};