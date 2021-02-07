//https://codeforces.com/problemset/problem/110/A

#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

int main()
{
    ll n, ans = 0;
    string s, x;
    cin >> s;
    n = s.size();
    for (int i = 0; i < n; i++)
    {
        if (s[i] - '0' == 4 || s[i] - '0' == 7)
            ans++;
    }
    x = to_string(ans);
    n = x.size();
    ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (x[i] - '0' == 4 || x[i] - '0' == 7)
            ans++;
        else
        {
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
    return 0;
}