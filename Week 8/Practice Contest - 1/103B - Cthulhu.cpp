//https://codeforces.com/problemset/problem/103/B

#include <bits/stdc++.h>

using namespace std;
#define ll long long

const int N = 5000;
int n, m;
vector<int> adjList[N];
bool visited[N];
int totalEdges;
void dfs(int node)
{
    if (visited[node])
        return;
    visited[node] = true;
    totalEdges++;
    for (auto child : adjList[node])
        dfs(child);
}

int main()
{
    cin >> n >> m;
    int u, v;
    if (n != m)
    {
        cout << "NO\n";
        return 0;
    }
    for (int i = 1; i <= m; i++)
    {
        cin >> u >> v;
        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }
    dfs(1);
    if (totalEdges < n)
        cout << "NO\n";
    else
        cout << "FHTAGN!\n";
    return 0;
}
