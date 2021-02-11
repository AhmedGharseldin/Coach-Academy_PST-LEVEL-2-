//https://codeforces.com/problemset/problem/1077/A

#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

int main()
{
    ll a, b, k, t;
    cin >> t;
    while (t--)
    {
        ll sum = 0;
        cin >> a >> b >> k;
        if (k % 2 == 1)
            sum = a * ((k + 1) / 2) - b * (k / 2);
        else
            sum = a * (k / 2) - b * (k / 2);

        cout << sum << endl;
    }
    return 0;
}
