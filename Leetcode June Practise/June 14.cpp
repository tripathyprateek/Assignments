class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int K) {       
        vector<int> dist( n, INT_MAX );
        dist[src] = 0;
        //bellmann ford algo
        for( int i=0; i <= K; i++ ) {
            vector<int> temp( dist );
            for( auto flight : flights ) {
                if( dist[ flight[0] ] != INT_MAX ) {
                    temp[ flight[1] ] = min( temp[flight[1]], dist[ flight[0] ] + flight[2] );
                }
            }
            dist = temp;
        }
        return dist[dst] == INT_MAX ? -1 : dist[dst];
    }

};

