class Solution {
public:
    vector<int>count;
    int sum=0;
    Solution(vector<int>& w) {
        for(auto i:w)
        {
            sum+=i;
            count.push_back(sum);
        }
    }
    int pickIndex() {
        int x=rand()%sum;
        auto it=upper_bound(count.begin(),count.end(),x)-count.begin();
        return it;
    }
};
/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(w);
 * int param_1 = obj->pickIndex();
 */
 
 //this question sucks. Description was really bad. Had to look up to a Youtube video to understand what was the question
