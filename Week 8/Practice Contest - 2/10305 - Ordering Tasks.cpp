//https://vjudge.net/problem/UVA-10305/origin

#include <bits/stdc++.h>

using namespace std;
#define ll long long
const int N = 101;
vector<int> edges[N];
vector<int> answer;
int inDegree[N];
int n, m;

void bfs()
{
    queue<int> q;
    for (int i = 1; i <= n; i++)
    {
        if (inDegree[i] == 0)
        {
            q.push(i);
            answer.push_back(i);
        }
    }
    while (!q.empty())
    {
        int next = q.front();
        q.pop();
        for (auto V : edges[next])
        {
            inDegree[V]--;
            if (inDegree[V] == 0)
            {
                q.push(V);
                answer.push_back(V);
            }
        }
    }
}

void empty()
{
    for (int i = 0; i <= n; i++)
    {
        inDegree[i] = 0;
        edges[i].clear();
    }
    answer.clear();
}
int main()
{
    int u, v;
    while (cin >> n >> m && n+m)
    {
        empty();
        for (int i = 1; i <= m; i++)
        {
            cin >> u >> v;
            edges[u].push_back(v);
            inDegree[v]++;
        }
        bfs();
        int sz = answer.size();
        for (int x = 0; x < sz; x++)
            cout << answer[x] << " \n"[x == sz - 1];
    }
    return 0;
}