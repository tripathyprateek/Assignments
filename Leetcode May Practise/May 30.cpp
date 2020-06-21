class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int K) {
      multimap<int, int> map;
      for (int i = 0; i < points.size(); ++i)
        map.insert({ points[i][0] * points[i][0] + points[i][1] * points[i][1], i });
      vector<vector<int>> res;
      for (auto it = map.begin(); K > 0; ++it, --K) 
          res.push_back(points[it->second]);
      return res;
    }
    
};
