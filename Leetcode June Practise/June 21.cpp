class Solution {
public:
    int calculateMinimumHP(vector<vector<int>>& dungeon) {
        int height = dungeon.size();
        int len = dungeon[0].size();
        vector<vector<int>> dp(height+1, vector<int>(len+1, INT_MAX));
        dp[height][len-1] = 1;
        dp[height-1][len] = 1;
        for(int i = height-1; i >= 0; i--){
            for(int j = len-1; j >= 0; j--){
                dp[i][j] = max(1, min(dp[i+1][j], dp[i][j+1]) - dungeon[i][j]);
            }
        }
        return dp[0][0];
    }
};
