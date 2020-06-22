class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int len = nums.size(), ans; 
        unordered_map<int, int> map;
        for(int i=0; i<len; i++) {
            if(map.find(nums[i]) == map.end()) {
                map.insert({nums[i], 1});
            } else {
                map[nums[i]]++;
            }
        }
        for(auto it = map.begin(); it != map.end(); it++) {
            if(it->second == 1) {
                ans = it->first;
                break;
            }
        }
        return ans;
    }
};
