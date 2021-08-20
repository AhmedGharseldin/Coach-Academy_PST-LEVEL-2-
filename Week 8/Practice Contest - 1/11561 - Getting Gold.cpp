//https://vjudge.net/problem/UVA-11561/origin

#include <bits/stdc++.h>

using namespace std;
#define ll long long

const int N = 50 + 5;
int n, m;
char grid[N][N];
bool visited[N][N];
int dx[] = {1, -1, 0, 0};
int dy[] = {0, 0, 1, -1};
int counter;

void dfs(int x, int y)
{
    int x2, y2;
    visited[x][y] = true;
    if(grid[x][y] == 'G')
        counter++;
    for (int i = 0; i < 4; i++)
    {
        x2 = x + dx[i];
        y2 = y + dy[i];
        if(grid[x2][y2] == 'T')
            return;
    }
    
    for (int i = 0; i < 4; i++)
    {
        x2 = x + dx[i];
        y2 = y + dy[i];
        if (!visited[x2][y2] && (grid[x2][y2] == '.' || grid[x2][y2] == 'G'))
            dfs(x2, y2);
    }
}


int main()
{
    int x, y;
    while (cin >> m >> n)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> grid[i][j];
                visited[i][j] = 0;
                if (grid[i][j] == 'P'){
                    x = i;
                    y = j;
                }
            }
        }
        counter = 0;
        dfs(x, y);
        cout << counter  << endl;
    }
    return 0;
}
