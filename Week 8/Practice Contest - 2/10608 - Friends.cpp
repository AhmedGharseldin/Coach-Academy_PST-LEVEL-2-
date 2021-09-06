//https://vjudge.net/problem/UVA-10305/origin

#include <bits/stdc++.h>

using namespace std;
#define ll long long
const int N = 5e5 + 5;
set<int> s;
vector<int> edges[N];
bool visited[N];
int n, m, counter, path;

void dfs(int node)
{
    counter++;
    visited[node] = 1;
    for (auto next : edges[node])
        if (!visited[next])
            dfs(next);
}

void empty()
{
    for (int i = 0; i <= n; i++)
    {
        visited[i] = 0;
        edges[i].clear();
    }
    counter = 0;
    path = 0;
}
int main()
{
    int u, v, t;
    cin >> t;
    while (t--)
    {
        cin >> n >> m;
        empty();
        for (int i = 1; i <= m; i++)
        {
            cin >> u >> v;
            edges[u].push_back(v);
            edges[v].push_back(u);
        }
        for (int citizen = 1; citizen <= n; citizen++)
        {
            counter = 0;
            if (!visited[citizen])
                dfs(citizen);
            path = max(path, counter);
        }
        cout << path << endl;
    }
    return 0;
}