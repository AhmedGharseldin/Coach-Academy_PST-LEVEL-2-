//https://codeforces.com/problemset/problem/71/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, x;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        x = s.size();
        if (x > 10)
            cout << s[0] << x - 2 << s[x - 1] << endl;
        else
            cout << s << endl;
    }
    return 0;
}
