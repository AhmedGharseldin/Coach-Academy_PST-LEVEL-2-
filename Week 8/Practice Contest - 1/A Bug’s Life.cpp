//https://www.spoj.com/problems/BUGLIFE/en/

#include <bits/stdc++.h>

using namespace std;
#define ll long long

const int N = 1e6 + 5;
int n, m;
vector<int> edges[N];
int color[2001];
bool found;
//Suspicious bugs found!
//No Suspicious bugs found!
//int dx[] = {1, -1, 0, 0};
//int dy[] = {0, 0, 1, -1};

//bool valid(int a, int b)
//{
//    return a >= 0 && b >= 0 && a < n && b < m && !visited[a][b];
//}

void dfs(int x)
{
    queue<int> q;
    q.push(x);
    color[x] = 1;
    while (!q.empty())
    {
        int u = q.front();
        q.pop();
        for (auto v : edges[u])
        {
            if (color[v] == -1)
            {
                color[v] = 1 - color[u];
                q.push(v);
            }
            else if (color[v] == color[u])
                found = true;
        }
    }
}

void empty()
{
    for (int i = 1; i <= m; i++)
    {
        edges[i].clear();
        color[i] = -1;
    }
}

int main()
{
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        cin >> m >> n;
        empty();
        found = false;
        for (int i = 0; i < n; i++)
        {
            int u, v;
            cin >> u >> v;
            edges[u].push_back(v);
            edges[v].push_back(u);
        }
        for (int j = 1; j <= m; j++)
        {
            if (color[j] == -1)
                dfs(j);
        }
        //        for (int i = 0; i < 4; i++) {
        //            cout << color[i] << endl;
        //        }
        cout << "Scenario #" << i << ":\n"
             << (found ? "Suspicious bugs found!" : "No suspicious bugs found!") << endl;
    }
    return 0;
}
