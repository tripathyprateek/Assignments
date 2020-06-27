class Solution {
public:
    int numSquares(int n) {
        if(n<= 0)
            return 0;
        vector<int>square(n+1,INT_MAX);
        square[0] = 0;
        for(int i = 1;i<=n;i++)
            for(int j = 1;j*j<=i;j++)
                square[i] = min(square[i],square[i-j*j] +1);
        return square.back();
    }
};
