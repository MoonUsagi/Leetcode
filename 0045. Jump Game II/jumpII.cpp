class Solution {
public:
    int jump(vector<int>& nums) {
        
    if(nums.size() <=1) return 0;

    int numjump = 0; //紀錄跳躍次數
    int end = 0;     //當前最遠位子
    int maxjump  =0; // 評估能跳的最遠

    //先掃每一步的狀況，評估當下能跳的最大值．如果能跳就跳躍次數＋＋
    for(int i =0; i <nums.size()-1; i++)
    {
        maxjump = max(maxjump,i+nums[i]); //算最大值
        // 掃完後可達最遠位子
        if(i == end)
        {
            end = maxjump;
            numjump++; //跳躍次數++
        }

    }
    return numjump;

    }
};