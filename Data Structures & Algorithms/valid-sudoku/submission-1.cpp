class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        // Check 3x3 sub-boxes
        for (int i = 0; i < 9; i += 3) {
            for (int j = 0; j < 9; j += 3) {
                unordered_set<char> seen;
                for (int ti = 0; ti < 3; ti++) {
                    for (int tj = 0; tj < 3; tj++) {
                        char cell = board[i + ti][j + tj];
                        if (cell == '.') continue;
                        if (seen.count(cell)) return false;
                        seen.insert(cell);
                    }
                }
            }
        }

        // Check rows
        for (int row = 0; row < 9; row++) {
            unordered_set<char> seen;
            for (int col = 0; col < 9; col++) {
                if (board[row][col] == '.') continue;
                if (seen.count(board[row][col])) return false;
                seen.insert(board[row][col]);
            }
        }

        // Check columns
        for (int col = 0; col < 9; col++) {
            unordered_set<char> seen;
            for (int row = 0; row < 9; row++) {
                if (board[row][col] == '.') continue;
                if (seen.count(board[row][col])) return false;
                seen.insert(board[row][col]);
            }
        }

        return true;
    }
};