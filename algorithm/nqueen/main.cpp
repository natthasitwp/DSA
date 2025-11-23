#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

// ==========================================
// YOUR CODE STARTS HERE
// ==========================================

int N;

// Helper: Returns true if placing a queen at board[row][col] is safe
bool isSafe(vector<string>& board, int row, int col) {
    int n = board.size(); // Use local size or global N

    // 1. Check Column (Vertical Upwards)
    // Start from the row immediately above (row - 1)
    for (int i = row - 1; i >= 0; i--) {
        if (board[i][col] == 'Q')
            return false;
    }

    // 2. Check Upper-Left Diagonal
    // Start from top-left neighbor: (row - 1, col - 1)
    int i = row - 1;
    int j = col - 1;
    while (i >= 0 && j >= 0) {
        if (board[i][j] == 'Q') return false;
        i--;
        j--;
    }

    // 3. Check Upper-Right Diagonal
    // Start from top-right neighbor: (row - 1, col + 1)
    i = row - 1;
    j = col + 1;
    while (i >= 0 && j < n) {
        if (board[i][j] == 'Q') return false;
        i--;
        j++;
    }

    return true; 
}

// Backtracking Function
bool solveNQueens(vector<string> &board, int row)
{
    // TODO: Recursively place queens row by row using backtracking to find a valid configuration.
    if (row == board.size())
        return true;
    
    for (size_t i = 0; i < board.size(); i++)
    {
        if (isSafe(board, row, i))
        {
            board[row][i] = 'Q';
            if (solveNQueens(board, row + 1))
                return true;

            board[row][i] = '.';
        }
    }
    return false;
}

// ==========================================
// DRIVER CODE
// ==========================================
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    if (!(cin >> N))
        return 0;

    // Initialize board with dots
    vector<string> board(N, string(N, '.'));

    if (solveNQueens(board, 0))
    {
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < N; j++)
            {
                cout << board[i][j] << " ";
            }
            cout << endl;
        }
    }
    else
    {
        cout << "NO SOLUTION" << endl;
    }

    return 0;
}