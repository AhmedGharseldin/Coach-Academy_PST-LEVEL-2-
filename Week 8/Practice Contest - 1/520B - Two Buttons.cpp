//https://codeforces.com/problemset/problem/520/B

#include <bits/stdc++.h>

using namespace std;
int const N = 2e4 + 5;
vector<int> edges[N];
int dist[N];
int n, m, counter = 0;

void dfs(int node)
{
    queue<int> q;
    q.push(node);
    dist[node] = 0;
    while (!q.empty())
    {
        int next = q.front();
        q.pop();
        if (next == m)
        {
            cout << dist[next] << endl;
            return;
        }
        int a = next * 2;
        if (a < 20000 && dist[a] == -1)
        {
            q.push(a);
            dist[a] = dist[next] + 1;
        }
        int b = next - 1;
        if (b > 0 && dist[b] == -1)
        {
            q.push(b);
            dist[b] = dist[next] + 1;
        }
    }
    return;
}

int main()
{
    cin >> n >> m;
    memset(dist, -1, sizeof(dist));
    dfs(n);
    return 0;
}
