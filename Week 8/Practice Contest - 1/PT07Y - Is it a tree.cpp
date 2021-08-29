//https://www.spoj.com/problems/PT07Y/en/

#include <bits/stdc++.h>

using namespace std;

const int N = 10005;
vector<int> edges[N];
bool vis[N];
int cnt = 0;

void dfs(int node)
{
    cnt++;
    vis[node] = 1;
    for (auto path : edges[node])
    {
        if (!vis[path])
            dfs(path);
    }
}

int main()
{
    int n, m, u, v;
    cin >> n >> m;
    for (int i = 1; i <= m; i++)
    {
        cin >> u >> v;
        edges[u].push_back(v);
        edges[v].push_back(u);
    }
    if (m != n - 1)
    {
        cout << "NO\n";
        return 0;
    }
    dfs(1); //start traversing from node 1;
    if (cnt == n)
        cout << "YES\n";
    else
        cout << "NO\n";
}
