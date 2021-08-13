//https://codeforces.com/problemset/problem/580/C

#include <bits/stdc++.h>

using namespace std;
int const N = 1e5 + 5;
bool cats[N];
vector<int> edges[N];
int path, m;

void dfs(int x, int p, int c)
{
    if (c > m)
        return;
    if (x != 1 && edges[x].size() == 1)
        path++;

    for (auto child : edges[x])
    {
        if (child != p)
            dfs(child, x, (cats[child] ? c+1 : 0));
    }
}

int main()
{
    int n, u, v;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        cin >> cats[i];
    for (int i = 1; i < n; i++)
    {
        cin >> u >> v;
        edges[u].push_back(v);
        edges[v].push_back(u);
    }
    dfs(1, 0, cats[1]);
    cout << path << endl;
}
