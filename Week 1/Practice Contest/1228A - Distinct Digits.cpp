//https://codeforces.com/problemset/problem/1228/A

#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main()
{
    int l, r, x, n;
    cin >> l >> r;
    string s;
    x = l;
    while (x <= r)
    {
        int arr[10] = {};
        s = to_string(x);
        n = s.size();
        for (int i = 0; i < n; i++)
            arr[s[i] - '0']++;
        sort(arr, arr + 10);
        if (arr[9] > 1)
            x++;
        else
        {
            cout << x << endl;
            return 0;
        }
    }
    cout << -1 << endl;
    return 0;
}
