//https://codeforces.com/problemset/problem/4/C

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    string a;
    map<string, int> mp;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        if (mp.find(a) == mp.end())
        {
            cout << "OK\n";
            mp[a] = 1;
        }
        else
            cout << a << mp[a]++ << "\n";
    }
    return 0;
}
