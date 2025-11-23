#include <bits/stdc++.h>

using namespace std;

int main()
{
    int R, C;
    cin >> R >> C;
    vector<vector<char>> board(R, vector<char>(C));

    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {
            cin >> board[i][j];
        }
    }

    string word;
    cin >> word;
    return 0;
}