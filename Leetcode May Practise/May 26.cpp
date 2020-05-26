class Solution {
public:
    int findMaxLength( vector<int>& nums ) {
        if( nums.size() == 0 ) return 0;
        int maxLen = 0, count = 0;
        unordered_map<int, int> map; 
        for( int i=0; i < nums.size(); i++ ) {
            if( nums[i] == 1 )
                count++;
            else count--;
            
            if( map.find(count) != map.end() )
                maxLen = max( maxLen, i - map[count] );
            else
                map[count] = i;
            
            if( count == 0 )
                maxLen = i + 1;       
        }
        return maxLen;
    }
};
