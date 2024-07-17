class RandomizedSet {
private:
    unordered_map<int,int> valIndex;
    vector<int> num;
public:
    RandomizedSet() 
    {
        
    }
    
    bool insert(int val) 
    {  
        //如果find不到，會吐出valIndex的最後尾，因此如果吐出來的不是最後尾，代表有此數值
        //代表內建已有此數值所以回傳false
        if(valIndex.find(val) != valIndex.end())
        {
            return false;
        }
        
        num.push_back(val); //在num後面接上val
        valIndex[val] = num.size()-1;  //將val放入valIndex中，並且存入索引值
        
        return true;
    }
    
    bool remove(int val) 
    {
        //如果吐出的是最後尾．代表沒找到此數值，所以無法刪除
        if(valIndex.find(val) == valIndex.end())
        {
            return false;
        }
        
        int lastElement = num.back();
        int indexRemove = valIndex[val];
        num[indexRemove] = lastElement;
        valIndex[lastElement] =indexRemove;

        valIndex.erase(val);
        num.pop_back();

        return true;
    }
    
    int getRandom() 
    {
        int randomNum = rand()% num.size(); //隨機生成一個值，從num向量中隨機獲得
        return num[randomNum];
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */