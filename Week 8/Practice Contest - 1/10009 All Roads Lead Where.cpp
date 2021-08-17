//https://vjudge.net/problem/UVA-10009/origin

#include <bits/stdc++.h>

using namespace std;
const int N = 256;
vector<int> cities[N];
bool vis[N];
vector<int> path;
int v, f, n, m;
bool found;

void dfs(int node)
{
    if (vis[node])
        return;
    vis[node] = true;
    path.push_back(node);
    if (node == f)
    {
        char c;
        for (auto it : path)
        {
            c = it + 'A';
            cout << c;
        }
        return;
    }
    for (auto child : cities[node])
        dfs(child);
    path.pop_back();
}

void empty()
{
    for (int i = 0; i < N; i++)
    {
        vis[i] = false;
    }
    path.clear();
}

int main()
{
    string a, b;
    int t, l = 0;
    cin >> t;
    while (t--)
    {
        path.clear();
        for (int j = 0; j < N; j++)
        {
            vis[j] = false;
            cities[j].clear();
        }
        l++;
        if (l > 1)
            cout << endl;
        cin >> n >> m;
        for (int i = 0; i < n; i++)
        {
            cin >> a >> b;
            v = a[0] - 'A';
            f = b[0] - 'A';
            cities[v].push_back(f);
            cities[f].push_back(v);
        }
        for (int i = 0; i < m; i++)
        {
            cin >> a >> b;
            empty();
            v = a[0] - 'A';
            f = b[0] - 'A';
            dfs(v);
            cout << endl;
        }
    }
}
