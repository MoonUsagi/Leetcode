class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int arrSize = arr.size() -1;
        int maxVaule = -1;
        for(int i = arrSize; i >= 0; i--)
        {
            int temp = maxVaule;
            if(arr[i] > maxVaule)
                maxVaule = arr[i];
                arr[i] = temp;
        }
        return arr;
    }
};