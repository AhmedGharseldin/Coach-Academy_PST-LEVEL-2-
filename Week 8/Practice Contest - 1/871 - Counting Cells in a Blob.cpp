// ///https://vjudge.net/problem/UVA-871/origin

#include <bits/stdc++.h>

using namespace std;

vector<string> grid;
int dx[] = {0, 1, 1, 1, 0, -1, -1, -1};
int dy[] = {1, 1, 0, -1, -1, -1, 0, 1};
int n, m, counter;

bool isValid(int a, int b)
{
    return a >= 0 && a < n && b >= 0 && b < m && grid[a][b] == '1';
}

void dfs(int r, int c)
{
    if (!isValid(r, c))
        return;
    counter++;
    grid[r][c] = '0';
    for (int d = 0; d < 8; d++)
    {
        int x = r + dx[d];
        int y = c + dy[d];
        dfs(x, y);
    }
}

int main()
{
    int t, newLine = 0;
    cin >> t;
    getchar();
    string s, blank;
    getline(cin, blank);
    while (t--)
    {
        grid.clear();
        counter = 0;
        int ans = 0;
        while (getline(cin, s) && s.length() > 0)
        {
            grid.push_back(s);
        }
        n = (int)grid[0].size();
        m = (int)grid.size();
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (grid[i][j] == '1')
                {
                    counter = 0;
                    dfs(i, j);
                    ans = max(ans, counter);
                }
            }
        }
        if (newLine)
            cout << endl;
        cout << ans << endl;
        newLine++;
    }

    return 0;
}
