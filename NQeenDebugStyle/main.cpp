#include <iostream>
#include <vector>
#include <string>

using namespace std;

void printBoard(const vector<string>& board) {
    for (const string& row : board) {
        cout << row << endl;
    }
    cout << "--------" << endl;
}

bool isSafe(vector<string>& board, int row, int col, int n) {
    // Check column
    for (int i = 0; i < row; ++i) {
        if (board[i][col] == 'Q') return false;
    }

    // Check upper-left diagonal
    for (int i = row - 1, j = col - 1; i >= 0 && j >= 0; --i, --j) {
        if (board[i][j] == 'Q') return false;
    }

    // Check upper-right diagonal
    for (int i = row - 1, j = col + 1; i >= 0 && j < n; --i, ++j) {
        if (board[i][j] == 'Q') return false;
    }

    return true;
}

void nQueens(vector<string>& board, int row, int n, vector<vector<string>>& ans) {
    cout << "\n>> Entering row " << row << endl;
    printBoard(board);

    if (row == n) {
        cout << "==> ✅ Valid solution found!" << endl;
        printBoard(board);
        ans.push_back(board);
        return;
    }

    for (int col = 0; col < n; ++col) {
        cout << "Trying to place queen at (" << row << ", " << col << ")..." << endl;

        if (isSafe(board, row, col, n)) {
            board[row][col] = 'Q';
            cout << "✅ Placed queen at (" << row << ", " << col << ")\n";
            printBoard(board);

            nQueens(board, row + 1, n, ans);  // Recursive call

            board[row][col] = '.';  // Backtrack
            cout << "↩️ Backtracking from (" << row << ", " << col << ")\n";
            printBoard(board);
        } else {
            cout << "❌ Unsafe to place queen at (" << row << ", " << col << ")\n";
        }
    }

    cout << "<< Exiting row " << row << endl;
}

vector<vector<string>> solveNQueens(int n) {
    vector<string> board(n, string(n, '.'));
    vector<vector<string>> ans;
    nQueens(board, 0, n, ans);
    return ans;
}

int main() {
    int n = 4;
    vector<vector<string>> solutions = solveNQueens(n);

    cout << "\n🎉 All Solutions:\n";
    for (auto& board : solutions) {
        printBoard(board);
    }

    return 0;
}
