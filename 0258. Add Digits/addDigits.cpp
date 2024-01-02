class Solution {
public:
    int addDigits(int num) {
        /*
        if(num <10) return num;
        else 
            int n = num;
            while(n>=10)
            {
                int t =n;
                temp =0;
                while(t)
                {
                    temp = t%10;
                    n += temp;
                    t /= 10;

                }
            }
            return n;
    }
    */
 /*       
    int n = num;
    while (n >= 10) {      
      int t = n;
      n = 0;
      while (t) {
        n += t % 10;
        t /= 10;
      }
    }
    return n;
  }
};

*/
return 1 + (num - 1) % 9;
          }
};