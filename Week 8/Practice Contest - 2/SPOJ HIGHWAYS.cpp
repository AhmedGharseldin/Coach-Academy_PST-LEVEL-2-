//https://vjudge.net/problem/SPOJ-HIGHWAYS/origin

#include <bits/stdc++.h>

using namespace std;
#define ll long long
const int N = 1e5 + 5;
vector<pair<int, int>> edges[N];

int main()
{
    int t, st, en;
    cin >> t;
    while (t--)
    {
        int dist[N];
        int u, v, n, m, w;
        cin >> n >> m >> st >> en;
        for (int i = 1; i <= m; i++)
        {
            cin >> u >> v >> w;
            edges[u].push_back({v, w});
            edges[v].push_back({u, w});
        }
        for (int d = 1; d <= n; d++)
            dist[d] = 1e9;
        priority_queue<pair<int, int>> q;
        q.push({0, st});
        dist[st] = 0;
        while (!q.empty())
        {
            int d = -q.top().first;
            u = q.top().second;
            // ans.push_back(current);
            q.pop();
            for (auto E : edges[u])
            {
                v = E.first;
                w = E.second;
                if (dist[v] > dist[u] + w)
                {
                    dist[v] = dist[u] + w;
                    q.push({-dist[v], v});
                }
            }
        }
        if (dist[en] == 1e9)
            cout << "NONE\n";
        else
            cout << dist[en] << endl;
    }
    return 0;
}