//https://vjudge.net/problem/UVA-11953/origin

#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#include <algorithm>
#include <map>
#include <unordered_set>
#include <set>
#include <stack>
#include <queue>

typedef long long ll;
using namespace std;
const int N = 1e5 + 5;
char board[105][105];
bool vis[105][105];
int g, ans;
int dx[] = {0, 1, 0, -1};
int dy[] = {1, 0, -1, 0};

bool isValid(int r, int c)
{
    return r >= 1 && r <= g && c >= 1 && c <= g && !vis[r][c] && board[r][c] != '.';
}

void dfs(int r1, int c1)
{
    if (isValid(r1, c1))
    {
        vis[r1][c1] = 1;
        for (int i = 0; i < 4; i++)
        {
            int r2 = r1 + dx[i];
            int c2 = c1 + dy[i];
            dfs(r2, c2);
        }
    }
}

int main()
{
    int t;
    cin >> t;
    for (int testCase = 1; testCase <= t; testCase++)
    {
        ans = 0;
        for (int x = 1; x < 105; x++)
            for (int y = 1; y < 105; y++)
            {
                vis[x][y] = 0;
            }
        cin >> g;
        for (int x = 1; x <= g; x++)
            for (int y = 1; y <= g; y++)
                cin >> board[x][y];
        for (int i = 1; i <= g; i++)
            for (int j = 1; j <= g; j++)
            {
                if (!vis[i][j] && board[i][j] == 'x')
                {
                    ans++;
                    dfs(i, j);
                }
            }
        cout << "Case " << testCase << ": " << ans << endl;
    }
    return 0;
}