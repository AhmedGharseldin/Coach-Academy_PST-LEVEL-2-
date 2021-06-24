//https://codeforces.com/problemset/problem/44/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    string a, b;
    set<pair<string, string>> F;
    cin >> n;
    while (n--)
    {
        cin >> a >> b;
        F.insert({a, b});
    }
    cout << F.size();
    return 0;
}
