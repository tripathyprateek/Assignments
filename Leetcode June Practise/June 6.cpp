class Solution {
public:
    static bool compare(vector<int>vec1, vector<int>vec2){
        return  (vec1[0]==vec2[0])?vec1[1]<vec2[1] : vec1[0]>vec2[0];
    }
    vector<vector<int>> reconstructQueue(vector<vector<int>>& people) {
        int num = people.size();
        sort(people.begin(),people.end(),compare);
        vector<vector<int>>ans;
        for(int i = 0;i<num;i++){
            ans.insert(ans.begin() + people[i][1],people[i]);
        }
        return ans;
    }
};
