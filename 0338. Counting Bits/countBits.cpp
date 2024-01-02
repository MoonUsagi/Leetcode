class Solution {
public:
    vector<int> countBits(int n) {
       vector<int> output(n + 1, 0);
        //if (n == 0) return {0};
        //if (n == 1) return {1};
        
         for (int i = 1; i <= n; i++) 
        {
            //and
            output[i] = output[i & (i - 1)] + 1;
        }
        return output;
        
        //for (int i = 0; i <= n; i++) 
        //{
        //    output.push_back(bitset<32>(i).count());
        // }
        //return output;
    }
};

//6  0111
//7  1000