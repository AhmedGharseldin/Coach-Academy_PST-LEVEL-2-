//https://codeforces.com/problemset/problem/670/D1
//https://codeforces.com/problemset/problem/670/D2

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;
#define ll long long
const ll N = 1e9 + 5;
vector<int> required, available;
ll ingredients, magicPowder;

bool maxCookies(int md);
ll binarySearch(int l, ll r);

int main()
{
    int input;
    cin >> ingredients >> magicPowder;
    for (int i = 0; i < ingredients; i++)
    {
        cin >> input;
        required.push_back(input);
    }
    for (int i = 0; i < ingredients; i++)
    {
        cin >> input;
        available.push_back(input);
    }
    cout << binarySearch(0, 2e9) << endl;
    return 0;
}

bool maxCookies(int md)
{
    ll x = magicPowder;
    for (int i = 0; i < ingredients; i++)
    {
        ll maxPossible = 1LL * md * required[i];
        if (maxPossible > available[i])
            x -= maxPossible - available[i];
        if (x < 0)
            return false;
    }
    return true;
}

ll binarySearch(int l, ll r)
{
    ll ans = 0;
    while (l <= r)
    {
        int md = l + (r - l) / 2;
        if (maxCookies(md))
        {
            l = md + 1;
            ans = md;
        }
        else
            r = md - 1;
    }
    return ans;
}