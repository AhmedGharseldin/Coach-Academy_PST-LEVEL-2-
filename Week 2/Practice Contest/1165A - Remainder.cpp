//https://codeforces.com/contest/1165/problem/A

#define FastIO() ios_base::sync_with_stdio(false), cin.tie(NULL);
#include <bits/stdc++.h>
typedef long long ll;

using namespace std;
const int N = 102;
char sting[N];

//Remainder
int main()
{
    int n, x, y, counter = 0;
    ll z, xx, yy;
    string s;
    cin >> n >> x >> y >> s;
    if (s[n - 1 - y] == '0')
        counter++;
    for (int i = n - y; i < n; i++)
    {
        if (s[i] == '1')
            counter++;
    }
    for (int i = n - x; i < n - y - 1; i++)
    {
        if (s[i] == '1')
            counter++;
    }
    cout << counter << endl;
    return 0;
}