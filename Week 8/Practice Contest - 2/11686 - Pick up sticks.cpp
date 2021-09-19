//https://vjudge.net/problem/UVA-11686/origin

#include <bits/stdc++.h>

using namespace std;
int const N = 1e6 + 5;
bool cats[N];
vector<int> edges[N];
vector<int> path;
bool vis[N], cycle = true;
int degree[N];
int n, m;

void dfs(int node)
{
    vis[node] = 1;
    for (auto child : edges[node])
    {
        if (!vis[child])
            dfs(child);
    }
    path.push_back(node);
}

void clear()
{
    for (int i = 1; i <= n; i++)
    {
        edges[i].clear();
        degree[i] = 0;
        vis[i] = 0;
    }
    path.clear();
}

int main()
{
    while (cin >> n >> m && n && m)
    {
        clear();
        int a, b;
        for (int i = 1; i <= m; i++)
        {
            cin >> a >> b;
            edges[a].push_back(b);
            degree[b]++;
        }
        int counter = 0;
        //check if graph is not DAG
        for (int z = 1; z <= n; z++)
        {
            if (!degree[z])
                counter++;
        }

        if (counter == 0)
        {
            cout << "IMPOSSIBLE\n";
            continue;
        }

        for (int node = 1; node <= n; node++)
        {
            if (!vis[node])
                dfs(node);
        }
        for (int x = n - 1; x >= 0; x--)
            cout << path[x] << endl;
    }
}

