//https://codeforces.com/problemset/problem/484/A

#define FastIO() ios_base::sync_with_stdio(false), cin.tie(NULL);
#include <bits/stdc++.h>
typedef long long ll;

using namespace std;
const ll mxxx = 1e18;
const int N = 1e6 + 9;
int arr[N];

int main()
{
    FastIO();
    int t;
    ll l, r;
    cin >> t;
    while (t--)
    {
        ll x = 1;
        cin >> l >> r;
        for (int i = 0; i < 64; i++)
        {
            if ((l | x) > r)
                break;
            else
            {
                l = l | x;
                x = x << 1;
            }
        }
        cout << l << endl;
    }
}
