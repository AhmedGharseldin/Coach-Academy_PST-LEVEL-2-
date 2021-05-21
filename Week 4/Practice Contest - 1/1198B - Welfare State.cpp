//https://codeforces.com/problemset/problem/1198/B

#include <bits/stdc++.h>

using namespace std;

// bool cmpIdx(pair<int, int> a, pair<int, int> b)
// {
//     return a.second < b.second;
// }
// bool cmpMoney(pair<int, int> a, pair<int, int> b)
// {
//     return a.first < b.first;
// }
int main()
{
    int n, q, p, x, operation, balance, mx = -1;
    cin >> n;
    int poor[200005] = {}, compare[200005] = {};
    vector<pair<int, int>> citizenBalance;
    for (int i = 0; i < n; i++)
    {
        cin >> balance;
        citizenBalance.push_back({balance, 0});
    }
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        cin >> operation;
        if (operation == 1)
        {
            cin >> p >> x;
            citizenBalance[p - 1].first = x;
            citizenBalance[p - 1].second = i;
        }
        else
        {
            cin >> x;
            poor[i] = x;
        }
    }
    for (int i = q - 1; i >= 0; i--)
    {
        mx = max(poor[i], mx);
        compare[i] = mx;
    }
    for (int i = 0; i < n; i++)
        cout << max(citizenBalance[i].first, compare[citizenBalance[i].second]) << " \n"[i == n - 1];
    return 0;
}