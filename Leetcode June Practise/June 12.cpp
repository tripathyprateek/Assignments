class RandomizedSet {
public:
    /** Initialize your data structure here. */
    vector<int>number;
    unordered_map<int,int> map;
    RandomizedSet() {
        
    }
    
    /** Inserts a value to the set. Returns true if the set did not already contain the specified element. */
    bool insert(int val) {
        if(map.find(val)!= map.end())
            return false;
        map[val] = number.size();
        number.push_back(val);
        return true;
    }
    
    /** Removes a value from the set. Returns true if the set contained the specified element. */
    bool remove(int val) {
        if(map.find(val) == map.end())
            return false;
        
        swap(number[map[val]], number[number.size() - 1]);
        number.pop_back();
        map[number[map[val]]] = map[val];
        map.erase(val);
        return true;    }
    
    /** Get a random element from the set. */
    int getRandom() {
        return number[rand()%number.size()];
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */
