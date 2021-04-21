//https://atcoder.jp/contests/abc168/tasks/abc168_b?lang=en

#define FastIO() ios_base::sync_with_stdio(false), cin.tie(NULL);
#include <bits/stdc++.h>
typedef long long ll;

using namespace std;
const int N = 102;
char sting[N];

int main()
{
    FastIO();
    int x, n;
    string s;
    cin >> x >> s;
    n = s.size();
    if (n <= x)
    {
        cout << s << endl;
        return 0;
    }
    else
        for (int i = 0; i < x; i++)
            cout << s[i];
    cout << "..." << endl;
    return 0;
}