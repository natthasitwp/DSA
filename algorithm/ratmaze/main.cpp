#include <iostream>
#include <vector>

using namespace std;

// ==========================================
// YOUR CODE STARTS HERE
// ==========================================

int N;

// Function to return true if a path exists from (r, c) to (N-1, N-1)
bool solve(vector<vector<int>> &grid, int r, int c)
{
    // TODO: Implement recursion with 4 directions (Up, Down, Left, Right)
    // Don't forget to handle "Visited" state to avoid cycles!

    if (r < 0 || c < 0 || r >= grid.size() || c >= grid.size() || grid[r][c] == 1)
        return false;

    if (r == grid.size() - 1 && c == grid.size() - 1)
        return true;

    grid[r][c] = 1;
    if (solve(grid, r + 1, c) || solve(grid, r, c + 1) || solve(grid, r - 1, c) || solve(grid, r, c - 1))
        return true;

    grid[r][c] = 0;//backtrack
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

    vector<vector<int>> grid(N, vector<int>(N));
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cin >> grid[i][j];
        }
    }

    if (solve(grid, 0, 0))
    {
        cout << "1" << endl;
    }
    else
    {
        cout << "0" << endl;
    }

    return 0;
}