class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        
        sort(people.begin(),people.end());
        int boats = 0;

        int first = 0; 
        int end = people.size() - 1;
        

        while (end >= first) 
        {
            if ((people[first] + people[end]) <= limit)
            {
                first++;
            }
            end--;
            boats++;
        }

        return boats;
        
        /*
        int boat =0;
        for(int i=0;i<people.size();i++)
        {
            if(i+1>=people.size())
            {
            boat =boat +1;
            break;
            }

            if((people[i]+people[i+1]) <=  limit)
            {
            boat = boat+1;
            i++;
            }
            else if(people[i]+people[i+1])
            {
            boat = boat+1;
            }
        }
        return(boat);
        */
    }
};