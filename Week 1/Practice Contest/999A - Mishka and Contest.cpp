//https://codeforces.com/problemset/problem/999/A

#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, k, x = 0;
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
    {
        if (a[i] <= k)
            x++;
        else
            break;
    }
    for (int i = n - 1; i > 0; i--)
    {
        if (a[i] <= k)
            x++;
        else
            break;
    }
    if (x > n)
        x = n;
    cout << x << endl;
    return 0;
}