class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int totalgas = 0;
        int totalcost = 0;
        int gasize = gas.size(); 

        for(int i=0; i< gasize; i++)
        {
            totalgas += gas[i];
            totalcost += cost[i];
        }
        if(totalgas < totalcost)
        {
             return -1;
        }

        int temp = 0;
        int res = 0;
         for(int i=0; i< gasize; i++)
         {
             temp += gas[i]-cost[i];
              if(temp<0)
              {
                   res = i+1;
                   temp = 0;
              }
         }
         return res;
    }
};