class StockSpanner {
public:
    
    vector<pair<int, int>> map;
    
    int next(int price) {
        int span = 1;
        int i = map.size() - 1;
        while(i >= 0 && price >= map[i].first){
            span += map[i].second;
            i -= map[i].second;
        }
        map.push_back(make_pair(price, span));
        return span;
    }
};
        
/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */
