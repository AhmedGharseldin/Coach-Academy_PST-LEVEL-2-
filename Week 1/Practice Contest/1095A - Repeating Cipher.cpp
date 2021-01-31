//https://codeforces.com/problemset/problem/1095/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, x = 0;
    string s;
    cin >> n >> s;
    if (n == 1)
    {
        cout << s;
        return 0;
    }
    for (int i = 0; i < n; i++)
    {
        x += i;
        if (x >= n)
            break;
        cout << s[i + x];
    }
    cout << endl;
    return 0;
}