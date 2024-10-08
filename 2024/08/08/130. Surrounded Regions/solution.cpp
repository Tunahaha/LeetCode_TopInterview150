class Solution {
public:
    void DFS(vector<vector<char>>& board, int i, int j, int m, int n) {
        if (i >= m || j >= n || i < 0 || j < 0 || board[i][j] != 'O')
            return;
        board[i][j] = '$';
        DFS(board, i + 1, j, m, n);
        DFS(board, i - 1, j, m, n);
        DFS(board, i, j + 1, m, n);
        DFS(board, i, j - 1, m, n);
    }
    void solve(vector<vector<char>>& board) {
    int m = board.size();
    if (m == 0) return;
    int n = board[0].size();
        for (int i = 0; i < m; i++) {
            if (board[i][0] == 'O')
                DFS(board, i, 0, m, n);
            if (board[i][n - 1] == 'O')
                DFS(board, i, n - 1, m, n);
        }
        for (int i = 1; i < n; i++) {
            if (board[0][i] == 'O')
                DFS(board, 0, i, m, n);
            if (board[m - 1][i] == 'O')
                DFS(board, m - 1, i, m, n);
        }
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (board[i][j] == 'O')
                    board[i][j] = 'X';
                else if (board[i][j] == '$')
                    board[i][j] = 'O';
            }
        }

    }
};