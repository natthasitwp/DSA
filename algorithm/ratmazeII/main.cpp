#include <iostream>
#include <vector>

using namespace std;

// ==========================================
// YOUR CODE STARTS HERE
// ==========================================

int N;

// Function to return the count of all unique paths
int countPaths(vector<vector<int>> &grid, int r, int c)
{
    // TODO:
    // 1. Base Case: Invalid/Visited -> return 0
    // 2. Base Case: Target Reached -> return 1 (we found 1 path)
    // 3. Mark Visited
    // 4. Recurse 4 directions and ADD their results together
    // 5. Backtrack (Unmark)
    if (r < 0 || c < 0 || r >= grid.size() || c >= grid.size() || grid[r][c] == 1)
        return 0;

    if (r == grid.size() - 1 && c == grid.size() - 1)
        return 1;

    grid[r][c] = 1;
    size_t cnt = countPaths(grid, r + 1, c) + countPaths(grid, r, c + 1) + countPaths(grid, r - 1, c) + countPaths(grid, r, c - 1);
    grid[r][c] = 0; 
    
    return cnt;
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

    cout << countPaths(grid, 0, 0) << endl;

    return 0;
}