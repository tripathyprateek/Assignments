class Solution {
public:
    int maxUncrossedLines(vector<int>& A, vector<int>& B) {
        int lena = A.size();
        int lenb = B.size();
        vector<vector<int>> lcs(A.size() + 1, vector<int>(B.size() + 1));
        for(int i = 1; i <= lena; i++){
            for(int j = 1; j <= lenb; j++){
                if(A[i-1] == B[j - 1])
                    lcs[i][j] = 1 + lcs[i - 1][j - 1];
                else
                    lcs[i][j] = max(lcs[i - 1][j], lcs[i][j - 1]);
            }
        }
        return lcs[lena][lenb];
    }
};
