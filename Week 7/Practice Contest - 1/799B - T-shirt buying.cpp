//https://codeforces.com/problemset/problem/799/B

#include <bits/stdc++.h>

using namespace std;
vector<pair<int, int>> shirtFront, shirtBack;
vector<int> ans;
const int N = 2e5 + 5;

int price[N], front[N], back[N];

set<pair<int, int>> color[4];

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> price[i];
    for (int i = 1; i <= n; i++)
        cin >> front[i];
    for (int i = 1; i <= n; i++)
    {
        cin >> back[i];
        color[front[i]].insert({price[i], i});
        color[back[i]].insert({price[i], i});
    }

    int m, req;
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        cin >> req;
        if (color[req].begin() == color[req].end()) // OR color[req].size() == 0 the array is empty.
        {
            ans.push_back(-1);
            continue;
        }
        auto it = color[req].begin();
        auto x = *it;
        ans.push_back(x.first);

        int first = front[x.second];
        color[first].erase(x);
        int second = back[x.second];
        color[second].erase(x);
    }
    for (auto it : ans)
        cout << it << " ";
}
