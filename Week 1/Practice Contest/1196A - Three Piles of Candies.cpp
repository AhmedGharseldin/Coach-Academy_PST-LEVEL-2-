//https://codeforces.com/problemset/problem/1196/A

#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

int main()
{
    ll t, a, b, c;
    cin >> t;
    while (t--)
    {
        cin >> a >> b >> c;

        cout << (a + b + c) / 2 << endl;
    }
    return 0;
}
