class Solution {
public:
  vector<vector<int>> intervalIntersection(vector<vector<int>>& a, vector<vector<int>>& b) {
        vector<vector<int>>count;
        int i=0,j=0;
        while(i<a.size() && j<b.size())
        {
            vector<int> collision;
            collision.push_back(max(a[i][0],b[j][0]));
            collision.push_back(min(a[i][1],b[j][1]));
            if(collision[0]<=collision[1]){
                count.push_back(collision);
            }
            if(a[i][1]<b[j][1]){
                i++;
            }
            else{
                j++;
            }
        }            
        return count;
  }
};
