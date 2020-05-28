class Solution {
public:
    vector<int> countBits(int num) {
        vector<int> vec(num+1, 0);
        int count = 1;
        
        for(int i = 1; i < num+1; i++){
            if(i==count*2) count *=2;        
            vec[i] = vec[i%count]+1;}
        return vec;
    }
};
