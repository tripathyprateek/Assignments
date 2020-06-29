class Solution {
public:
    int uniquePaths(int m, int n) {
        //maths question
        //(m+n-2)! / (m-1)!(n-1)!
        long ans = 1;
        for(int i = n;i<m+n-1;i++){
            ans= ans*i/(i-n+1);
        }
        return int(ans);
    }
};
