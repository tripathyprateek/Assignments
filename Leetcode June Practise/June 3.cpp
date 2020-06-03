class Solution {
public:
    int twoCitySchedCost(vector<vector<int>>& costs) {
        int num = costs.size();
        vector<pair<int,int>> vec;
        for(int i=0;i<num;i++){
            vec.push_back({costs[i][0]-costs[i][1],i});
        }
        sort(vec.begin(),vec.end());
        int ans = 0;
        for(int i=0;i<num/2;i++){
            ans+=costs[vec[i].second][0];
        }
        for(int i = num/2;i<num;i++){
            ans+=costs[vec[i].second][1];
        }
        return ans;
    }
};
