class Solution {
public:
    
    bool chk(vector<vector<char>>& board, int i, int j) {
        unordered_map<char, int> freq;

        for (char ch = '1'; ch <= '9'; ++ch) {
            freq[ch] = 1;
        }

        for (int a = i; a < i + 3; a++) {
            for (int b = j; b < j + 3; b++) {
                if (board[a][b] == '.') continue; 
                if (freq[board[a][b]] == 0) return false; 
                freq[board[a][b]]--; 
            }
        }
        return true;
    }

    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_map<char, int> freq;

        for (char ch = '1'; ch <= '9'; ++ch) {
            freq[ch] = 1;
        }

        for (int i = 0; i < 9; i++) {
            unordered_map<char, int> copy = freq;
            for (int j = 0; j < 9; j++) {
                if (board[i][j] == '.') continue; 
                if (copy[board[i][j]] == 0) return false;
                copy[board[i][j]]--; 
            }
        }

        for (int i = 0; i < 9; i++) {
            unordered_map<char, int> copy = freq;
            for (int j = 0; j < 9; j++) {
                if (board[j][i] == '.') continue; 
                if (copy[board[j][i]] == 0) return false; 
                copy[board[j][i]]--; 
            }
        }

        for (int i = 0; i < 9; i += 3) {
            for (int j = 0; j < 9; j += 3) {
                if (!chk(board, i, j)) return false; 
            }
        }

        return true;
    }
};
