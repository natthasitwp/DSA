#include <iostream>
#include <vector>

using namespace std;

// ==========================================
// YOUR CODE STARTS HERE
// ==========================================

// Global variables for convenience in recursion
int ROWS, COLS;

bool canReach(vector<vector<char>> &grid, int r, int c)
{
    //cout<<r<<" , "<<c<<endl;
    // TODO: Write your complete recursive solution here
    if(r >= ROWS || c  >= COLS)
        return false;
    if(grid[r][c] == 'X')
        return false;

    if (r == ROWS - 1 && c == COLS - 1)
        return true;

    return canReach(grid, r + 1, c) || canReach(grid, r, c + 1);
}

// ==========================================
// DRIVER CODE
// ==========================================
int main()
{
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    if (!(cin >> ROWS >> COLS))
        return 0;

    vector<vector<char>> grid(ROWS, vector<char>(COLS));
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            cin >> grid[i][j];
        }
    }

    // Start recursion from (0, 0)
    if (canReach(grid, 0, 0))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}