//https://codeforces.com/problemset/problem/510/B

#include <bits/stdc++.h>

using namespace std;
const int N = 52;
char grid[N][N];
bool visited[N][N];
int dx[] = {1, -1, 0, 0};
int dy[] = {0, 0, 1, -1};
int n, m;
bool found;

bool valid(int a, int b)
{
    return a >= 1 && a < n + 1 && b >= 1 && b < m + 1;
}

void dfs(int x, int y, int sx, int sy)
{
    visited[x][y] = 1;
    for (int z = 0; z < 4; z++)
    {
        int newX = x + dx[z], newY = y + dy[z];
        //
        if (valid(newX, newY) && make_pair(newX, newY) != make_pair(sx, sy) && grid[newX][newY] == grid[x][y])
        {
            if (visited[newX][newY])
            {
                found = true;
                return;
            }
            dfs(newX, newY, x, y);
            if (found)
                return;
        }
    }
}
int main()
{
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cin >> grid[i][j];
        }
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (!visited[i][j])
                dfs(i, j, i, j);
        }
    }
    cout << (found ? "Yes\n" : "No\n");
    return 0;
}
