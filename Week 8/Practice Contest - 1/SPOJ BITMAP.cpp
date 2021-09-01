//https://www.spoj.com/problems/BITMAP/en/

#include <bits/stdc++.h>

using namespace std;

const int N = 190;
int dx[] = {0, 1, 0, -1};
int dy[] = {1, 0, -1, 0};
int n, m;

bool valid(int a, int b)
{
    return a >= 0 && b >= 0 && a < n && b < m;
}

int main()
{
    int t;
    string in, blank;
    cin >> t;
    while (t--)
    {
        cin >> n >> m;
        queue<pair<int, int>> q;
        int G[n][m];
        int dist[n][m];
        for (int i = 0; i < n; i++)
        {
            cin >> in;
            for (int j = 0; j < m; j++)
                G[i][j] = in[j] - '0';
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (G[i][j] == 1)
                {
                    dist[i][j] = 0;
                    q.push({i, j});
                }
                else
                    dist[i][j] = 1e9;
            }
        }
        while (!q.empty())
        {
            int x = q.front().first;
            int y = q.front().second;
            q.pop();
            for (int d = 0; d < 4; d++)
            {
                int nx = x + dx[d];
                int ny = y + dy[d];
                if (valid(nx, ny))
                {
                    if (dist[nx][ny] > dist[x][y] + 1)
                    {
                        dist[nx][ny] = dist[x][y] + 1;
                        q.push({nx, ny});
                    }
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
                cout << dist[i][j] << " \n"[j == m - 1];
        }
        getline(cin, blank);
    }
    return 0;
}