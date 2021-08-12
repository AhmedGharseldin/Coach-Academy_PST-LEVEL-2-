//https://codeforces.com/problemset/problem/540/C

#include <bits/stdc++.h>

using namespace std;
const int N = 505;
char grid[N][N];
int n, m, eR, eC, sR, sC;
int directionRow[] = {1, -1, 0, 0};
int directionCol[] = {0, 0, 1, -1};
bool visited[N][N];
bool pathFound = false;

bool valid(int a, int b)
{
    return a >= 1 && b >= 1 && a < n + 1 && b < m + 1;
}
bool dfs(int stR, int stC)
{
    for (int d = 0; d < 4; d++)
    {
        int newStrR = stR + directionRow[d];
        int newStrC = stC + directionCol[d];
        if (valid(newStrR, newStrC))
        {
            if (grid[newStrR][newStrC] == 'X')
            {
                if (newStrR == eR && newStrC == eC)
                    return true;
            }
            else
            {
                if (visited[newStrR][newStrC])
                {
                    if (newStrR == eR && newStrC == eC)
                        return true;
                }
                else
                {
                    visited[newStrR][newStrC] = 1;
                    if (dfs(newStrR, newStrC))
                        return true;
                }
            }
        }
    }
    return false;
}

int main()
{
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            cin >> grid[i][j];

    cin >> sR >> sC >> eR >> eC;
    cout << (dfs(sR, sC) ? "YES\n" : "NO\n");
    return 0;
}

