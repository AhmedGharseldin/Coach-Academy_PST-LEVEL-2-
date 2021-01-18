//https://codeforces.com/problemset/problem/4/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int w, a, b, c;
    cin >> w;
    if (w % 2 == 0)
    {
        a = w / 2;
        b = w / 2;
    }
    else
    {
        a = (w + 1) / 2;
        b = w - a;
    }
    for (int i = a; i > 0; i--)
    {
        c = i + b;
        if (i % 2 == 0 && b % 2 == 0 && c == w)
        {
            cout << "YES" << endl;
            return 0;
        }
        else
            b++;
    }
    cout << "NO" << endl;

    return 0;
}
