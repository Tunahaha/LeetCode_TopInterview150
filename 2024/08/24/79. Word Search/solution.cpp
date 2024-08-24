class Solution {
public:
    bool dfs(int i, int j, int index, string& word,
             vector<vector<char>>&board) {
        int r = board.size(), c = board[0].size();
        if (index == word.size() )
            return 1;
        if (i < 0 or j < 0 or i >= r or j >= c or board[i][j] == '.' or
            board[i][j] != word[index]) {
            return 0;
        }
        char p = board[i][j];
        board[i][j] = '.';
        if (dfs(i + 1, j, index + 1, word, board) or
            dfs(i - 1, j, index + 1, word, board) or
            dfs(i, j + 1, index + 1, word, board) or
            dfs(i, j - 1, index + 1, word, board))
            return 1;
        board[i][j] = p;
        return 0;
    }
    bool exist(vector<vector<char>>& board, string word) {
        int r = board.size(), c = board[0].size();
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                if (board[i][j] == word[0]) {
                    cout << board[i][j] << endl;
                    if (dfs(i, j, 0, word, board) == 1)
                        return 1;
                }
            }
        }
        return 0;
    }
};