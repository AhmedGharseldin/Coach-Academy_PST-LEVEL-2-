//https://vjudge.net/problem/UVA-10004/origin

#include <bits/stdc++.h>

using namespace std;
#define ll long long

const int N = 1e6 + 5;
int n, m;
vector<int> edges[N];
int color[2001];
bool found;

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
    while (cin >> m && m != 0)
    {
        cin >> n;
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
        cout << (found ? "NOT BICOLORABLE." : "BICOLORABLE.") << endl;
    }
    return 0;
}
