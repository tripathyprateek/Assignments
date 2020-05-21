class Solution {
public:
    int countSquares(vector<vector<int>>& matrix) {
        int count = 0;
        int row = matrix.size();
        int column = matrix[0].size();
        for(int i = 0;i<row;i++){
            for(int j = 0;j<column;j++){
                if(i > 0 && j > 0 && matrix[i][j]>0){
                    matrix[i][j] = min(matrix[i-1][j-1], min(matrix[i-1][j], matrix[i][j-1])) + 1;
                }
                count+=matrix[i][j];

            }
        }
        
            return count;
     }
        
    
};


