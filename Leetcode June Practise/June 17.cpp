class Solution {
public:
    void solve(vector<vector<char>>& board) {
        if (board.empty()) 
            return;
        int row = board.size(), col = board[0].size();
        for (int i = 0; i < row; ++i) {
            flip(board, i, 0);             
            flip(board, i, col - 1);       
        }
        
        for (int j = 1; j < col - 1; ++j) {
            flip(board, 0, j);             
            flip(board, row - 1, j);       
        }
        
        for (int i = 0; i < row; ++i)
            for (int j = 0; j < col; ++j)
                if (board[i][j] == 'O') 
                    board[i][j] = 'X';
                else if (board[i][j] == '1') 
                    board[i][j] = 'O';
    }
    
    void flip(vector<vector<char>>& board, int i, int j) {
        if (board[i][j] == 'O') {
            board[i][j] = '1';
            if (i > 1) 
                flip(board, i - 1, j);
            if (j > 1)
                flip(board, i, j - 1);
            if (i + 1 < board.size())
                flip(board, i + 1, j);
            if (j + 1 < board[0].size()) 
                flip(board, i, j + 1);
        }
    }
};
