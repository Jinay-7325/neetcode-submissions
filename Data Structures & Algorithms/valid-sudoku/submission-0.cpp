class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int rows[9][9] = {0};
        int cols[9][9] = {0};
        int boxes[9][9] = {0};

        for (int r = 0; r < 9; r++) {
            for (int c = 0; c < 9; c++) {
                if (board[r][c] == '.') continue;

                int num = board[r][c] - '1'; // Convert '1'-'9' to 0-8 index
                int box_index = (r / 3) * 3 + (c / 3);

                // Check if number already exists in row, column, or 3x3 box
                if (rows[r][num] || cols[c][num] || boxes[box_index][num]) {
                    return false;
                }

                // Mark number as seen
                rows[r][num] = cols[c][num] = boxes[box_index][num] = 1;
            }
        }
        return true;
    }
};
