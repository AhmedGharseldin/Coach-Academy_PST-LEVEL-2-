//https://codeforces.com/problemset/problem/779/C

#include <bits/stdc++.h>
typedef long long ll;

using namespace std;
int const N = 2e5 + 5;
// int freq[N], temp[N];

bool cmp(pair<int, int> a, pair<int, int> b)
{
    return (a.first - a.second) < (b.first - b.second);
}
int main()
{
    int n, k, input;
    cin >> n >> k;
    vector<pair<int, int>> items;
    for (int i = 0; i < n; i++)
    {
        cin >> input;
        items.push_back({input, 0});
    }
    for (int i = 0; i < n; i++)
    {
        cin >> input;
        items[i].second = input;
    }
    sort(items.begin(), items.end(), cmp);
    ll sum = 0;
    for (int i = 0; i < k; i++)
        sum += items[i].first;
    for (int i = k; i < n; i++)
        sum += min(items[i].first, items[i].second);

    cout << sum << endl;
    return 0;
}
