//https://vjudge.net/problem/UVA-439/origin

#include <bits/stdc++.h>

using namespace std;
const int N = 8;
int board[N][N];
bool visited[N][N];
int r1, c1, r2, c2;
char b1, b2;
int dx[] = {1, -1, 2, 2, 1, -1, -2, -2};
int dy[] = {2, 2, 1, -1, -2, -2, 1, -1};

bool valid(int a, int b)
{
    return a >= 0 && b >= 0 && a < 8 && b < 8 && !visited[a][b];
}

void bfs(int x, int y)
{
    queue<pair<int, int>> Q;
    Q.push({x, y});
    visited[x][y] = true;
    board[x][y] = 0;
    while (!Q.empty())
    {
        auto P = Q.front();
        Q.pop();
        if (P.first == r2 && P.second == c2)
        {
            cout << board[r2][c2] << " knight moves.\n";
            return;
        }
        for (int d = 0; d < 8; d++)
        {
            int newx = P.first + dx[d];
            int newy = P.second + dy[d];
            if (valid(newx, newy))
            {
                Q.push({newx, newy});
                visited[newx][newy] = true;
                board[newx][newy] = board[P.first][P.second] + 1;
            }
        }
    }
}

void empty()
{
    for (int i = 0; i < 8; i++)
        for (int j = 0; j < 8; j++)
            visited[i][j] = false;
}

int main()
{
    while (cin >> b1 >> r1 >> b2 >> r2)
    {
        cout << "To get from " << b1 << r1 << " to " << b2 << r2 << " takes ";
        c1 = b1 - '`';
        c2 = b2 - '`';
        r1--, r2--, c1--, c2--;
        bfs(r1, c1);
        empty();
    }
    return 0;
}
