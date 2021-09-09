//https://vjudge.net/problem/UVA-10685/origin

#include <bits/stdc++.h>

using namespace std;
#define ll long long
const int N = 5005;
map<string, int> vis;
map<string, string> mp;

void bfs(string x, int count, int n)
{
    queue<string> q;
    q.push(x);
    while (!q.empty())
    {
        string f = q.front;
        for(int)
    }
}

int main()
{
    int c, r;
    while (cin >> c >> r && (c + r))
    {
        string creatures, a, b;
        // queue<pair<string, string>> q;
        for (int i = 0; i < c; i++)
        {
            cin >> creatures;
            vis[creatures] = -1;
        for (int j = 0; j < r; j++)
        {
            cin >> a >> b;
            mp[a] = b;
            q.push
        }
        bfs(cr[0], 0, c);
    }
    return 0;
}