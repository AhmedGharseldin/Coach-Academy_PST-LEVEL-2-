//https://codeforces.com/problemset/problem/959/B

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, k, m;
    string a;
    map<string, int> mp;
    cin >> n >> k >> m;
    int cost[n], temp[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        mp[a] = i;
    }

    for (int i = 0; i < n; i++)
        cin >> cost[i];

    int x, idx;
    vector<int> mnCost(k, 1e9);
    for (int i = 0; i < k; i++)
    {
        cin >> x;
        while (x--)
        {
            cin >> idx;
            temp[--idx] = i;
            mnCost[i] = min(mnCost[i], cost[idx]);
        }
    }
    long long sum = 0;
    for (int i = 0; i < m; i++)
    {
        cin >> a;
        x = mp[a];
        sum += mnCost[temp[x]];
    }
    cout << sum << endl;
    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;
// map<string, int> ms;
// string str;
// int arr[100005], temp[100005], mn[100005];
// int main()
// {
//     int n, k, m;
//     cin >> n >> k >> m;
//     for (int i = 1; i <= n; i++)
//         cin >> str, ms[str] = i;
//     for (int i = 1; i <= n; i++)
//         cin >> arr[i], mn[i] = 1e9 + 7;
//     for (int i = 1, j; i <= k; i++)
//     {
//         int x;
//         cin >> x;
//         while (x--)
//             cin >> j, temp[j] = i, mn[i] = min(mn[i], arr[j]);
//     }
//     unsigned long long res = 0;
//     while (cin >> str)
//     {
//         res += mn[temp[ms[str]]];
//     }
//     ret