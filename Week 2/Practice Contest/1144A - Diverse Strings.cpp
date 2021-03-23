//https://codeforces.com/problemset/problem/988/A

#define FastIO() ios_base::sync_with_stdio(false), cin.tie(NULL);
#include <bits/stdc++.h>
typedef long long ll;

using namespace std;
const int N = 102;
char sting[N];

bool solve(string s)
{
    int n = s.size();
    sort(s.begin(), s.end());
    for (int i = 0; i < n - 1; i++)
    {
        if (s[i + 1] - s[i] != 1)
            return false;
    }
    return true;
}

int main()
{
    int t;
    cin >> t;
    string s;
    while (t--)
    {
        cin >> s;
        cout << (solve(s) ? "YES" : "NO") << endl;
    }
    return 0;
}