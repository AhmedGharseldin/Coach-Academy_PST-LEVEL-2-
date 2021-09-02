//https://codeforces.com/problemset/problem/242/C

#include <bits/stdc++.h>

using namespace std;

const int N = 1e5 + 5;
int dx[] = {0, 1, 1, 1, 0, -1, -1, -1};
int dy[] = {1, 1, 0, -1, -1, -1, 0, 1};
map<pair<int, int>, int> board;
int sx, sy, ex, ey;

void bfs(int r, int c)
{
    queue<pair<int, int>> q;
    q.push({r, c});
    while (!q.empty())
    {
        r = q.front().first;
        c = q.front().second;
        q.pop();
        for (int d = 0; d < 8; d++)
        {
            int x = r + dx[d];
            int y = c + dy[d];
            if (board[make_pair(x, y)] < 0)
            {
                board[make_pair(x, y)] = board[make_pair(r, c)] + 1;
                q.push({x, y});
            }
        }
    }
}

int main()
{
    int n, r, a, b;
    cin >> sx >> sy >> ex >> ey >> n;
    while (n--)
    {
        cin >> r >> a >> b;
        for (int i = a; i <= b; i++)
        {
            board[make_pair(r, i)] = -1;
        }
    }
    board[make_pair(sx, sy)] = 0;
    bfs(sx, sy);
    cout << board[make_pair(ex, ey)] << endl;
    return 0;
}