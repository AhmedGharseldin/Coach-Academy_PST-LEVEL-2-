//https://codeforces.com/problemset/problem/522/A

#include <bits/stdc++.h>

using namespace std;
const int N = 200 + 5;

map<string, int> mp;
bool vis[N];
void dfs(int node)
{
    vis[node] = 1;
}

void lower(string &a, string &b)
{
    int x, y;
    x = a.length();
    y = b.length();
    for (int i = 0; i < x; i++)
        a[i] = tolower(a[i]);
    for (int i = 0; i < y; i++)
        b[i] = tolower(b[i]);
}

int main()
{
    string a, r, b;
    int n, ans = 0;
    cin >> n;
    mp["polycarp"] = 1;
    for (int i = 1; i <= n; i++)
    {
        cin >> a >> r >> b;
        lower(a, b);
        mp[a] = mp[b] + 1;
        ans = max(ans, mp[a]);
    }
    cout << ans << endl;
    return 0;
}
