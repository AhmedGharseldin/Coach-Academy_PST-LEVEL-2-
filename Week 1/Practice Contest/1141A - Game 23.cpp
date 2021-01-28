//https://codeforces.com/problemset/problem/1141/A

#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int m, n, counter = 0, x;
    cin >> n >> m;
    if (m % n != 0)
    {
        cout << -1 << endl;
        return 0;
    }
    else
    {
        x = m / n;
        while (x % 2 == 0)
        {
            x /= 2;
            counter++;
        }
        while (x % 3 == 0)
        {
            x /= 3;
            counter++;
        }
        if (x != 1)
        {
            cout << -1 << endl;
            return 0;
        }
    }
    cout << counter << endl;
    return 0;
}
