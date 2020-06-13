class Solution {
public:
    vector<int> largestDivisibleSubset(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int len = nums.size();
        vector<vector<int>> result(nums.size());
        vector<int> answer;
        for (int i = 0;i <len;i++) {
            for (int j = 0;j < i;j++) {
                if (nums[i] % nums[j] == 0 && result[j].size() > result[i].size()) {
                    result[i] = result[j];
                }
            }
            result[i].push_back(nums[i]);
            if (answer.size() < result[i].size())
                answer = result[i];
        }
        return answer;
    }
};
