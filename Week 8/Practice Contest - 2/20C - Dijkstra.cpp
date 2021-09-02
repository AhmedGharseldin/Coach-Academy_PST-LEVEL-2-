//https://codeforces.com/problemset/problem/20/C

#include <bits/stdc++.h>

using namespace std;
#define ll long long
const int N = 1e5 + 5;
vector<int> ans(N);

void printR(int x)
{
    if (x != 1)
        printR(ans[x]);
    cout << x << ' ';
}
int main()
{
    priority_queue<pair<int, int>> q;
    ll dist[N];
    int u, v, n, m, w;
    cin >> n >> m;
    vector<pair<int, int>> edges[n + 1];
    for (int i = 1; i <= m; i++)
    {
        cin >> u >> v >> w;
        edges[u].push_back({v, w});
        edges[v].push_back({u, w});
    }
    for (int d = 1; d <= n; d++)
        dist[d] = 1e12;
    dist[1] = 0;
    q.push({0, 1});
    while (!q.empty())
    {
        int d = -(q.top().first);
        u = q.top().second;
        ans.push_back(u);
        q.pop();
        for (auto E : edges[u])
        {
            v = E.first;
            w = E.second;
            if (dist[v] > dist[u] + w)
            {
                dist[v] = dist[u] + w;
                ans[v] = u;
                q.push({-dist[v], v});
            }
        }
    }
    if (dist[n] == 1e12)
    {
        cout << "-1\n";
        return 0;
    }
    printR(n);
    return 0;
}