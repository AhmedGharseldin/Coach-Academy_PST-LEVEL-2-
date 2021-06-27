//https://codeforces.com/problemset/problem/520/B

#include <bits/stdc++.h>

using namespace std;
int counter = 0;

void solve(int m, int n);

int main()
{
    int m, n;
    cin >> m >> n;
    solve(m, n);
    cout << counter;
}

void solve(int m, int n)
{
    if (n < 0)
        return;
    if (n == m)
        return;
    if (n % 2 == 0 && n > m)
    {
        solve(m, n / 2);
        counter++;
    }
    else
    {
        solve(m, n + 1);
        counter++;
    }
    &
}