//https://codeforces.com/problemset/problem/44/A

#include <bits/stdc++.h>

using namespace std;
const int N = 505;
char grid[N][N];
int n, m, k;
int directionRow[] = {+1, -1, 0, 0};
int directionCol[] = {0, 0, +1, -1};
bool visited[N][N];

bool valid(int a, int b)
{
    return a >= 1 && b >= 1 && a < n + 1 && b < m + 1 && grid[a][b] != '#';
}
void dfs(int stR, int stC)
{
    visited[stR][stC] = 1;
    for (int d = 0; d < 4; d++)
    {
        int newStrR = stR + directionRow[d];
        int newStrC = stC + directionCol[d];
        if (valid(newStrR, newStrC) && !visited[newStrR][newStrC])
            dfs(newStrR, newStrC);
    }
    if (k)
    {
        grid[stR][stC] = 'X';
        k--;
    }
}
int main()
{
    int startRow, startCol;
    cin >> n >> m >> k;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cin >> grid[i][j];
            if (grid[i][j] == '.')
                startRow = i, startCol = j;
        }
    }

    dfs(startRow, startCol);

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
            cout << grid[i][j];
        cout << '\n';
    }
    return 0;
}
