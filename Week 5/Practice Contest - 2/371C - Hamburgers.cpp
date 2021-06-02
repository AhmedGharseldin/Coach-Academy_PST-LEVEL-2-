//https://codeforces.com/problemset/problem/371/C

#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const ll N = 1e9 + 5;
string in;
ll required[3], available[3], shop[3];
ll money;

bool maxBurgers(ll md);
ll binarySearch(ll l, ll r);

int main()
{
    cin >> in;
    int len = in.size();
    ll left = 0, right = 2e12;
    for (ll i = 0; i < len; i++)
    {
        if (in[i] == 'B')
            required[0]++;
        if (in[i] == 'S')
            required[1]++;
        if (in[i] == 'C')
            required[2]++;
    }
    for (int i = 0; i < 3; i++)
        cin >> available[i];
    for (int i = 0; i < 3; i++)
        cin >> shop[i];
    cin >> money;
    cout << binarySearch(left, right) << endl;
    return 0;
}

bool maxBurgers(ll md)
{
    ll x = money;
    for (int i = 0; i < 3; i++)
    {
        ll maxPossible = md * required[i];
        if (maxPossible > available[i])
            x -= (maxPossible - available[i]) * shop[i];
        if (x < 0)
            return false;
    }
    return true;
}

ll binarySearch(ll l, ll r)
{
    ll ans = 0;
    while (l <= r)
    {
        ll md = l + (r - l + 1) / 2;
        if (maxBurgers(md))
        {
            l = md + 1;
            ans = md;
        }
        else
            r = md - 1;
    }
    return ans;
}
