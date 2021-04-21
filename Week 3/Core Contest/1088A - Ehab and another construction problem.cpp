//https://codeforces.com/problemset/problem/1088/A

#define FastIO() ios_base::sync_with_stdio(false), cin.tie(NULL);
#include <bits/stdc++.h>
typedef long long ll;

using namespace std;
const int N = 102;
char sting[N];

int main()
{
    FastIO();
    int x, a, b;
    bool found = false;
    cin >> x;
    for (int i = 1; i <= x && !found; i++)
    {
        for (int j = 1; j <= x && !found; j++)
        {
            a = i, b = j;
            if (a % b == 0 && a * b > x && a < x * b)
                found = true;
        }
    }
    if (found)
        cout << a << ' ' << b;
    else
        cout << -1;
    return 0;
}