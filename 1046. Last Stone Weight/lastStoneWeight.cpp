class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        
        while(stones.size() > 1)
        {
            sort(stones.rbegin(), stones.rend());
            stones.push_back((stones[0] - stones[1]));
            stones.erase(stones.begin(), stones.begin() + 2);
        }
        if(stones.empty())
            return 0;

        return stones[0];
    }
};