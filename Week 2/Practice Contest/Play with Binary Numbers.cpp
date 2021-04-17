//https://vjudge.net/problem/SPOJ-HAP01

#define FastIO() ios_base::sync_with_stdio(false), cin.tie(NULL);
#include <bits/stdc++.h>
typedef long long ll;

using namespace std;
const int N = 2e5 + 9;
int arr[N];

int funcA(ll i)
{
    int oddCount = 0;
    for (int j = 0; j < 64; j += 2)
    {
        if (i & ((ll)1 << j))
            oddCount++;
    }
    return oddCount;
}
int funcB(ll i)
{
    int evenCount = 0;
    for (int j = 1; j < 64; j += 2)
    {
        if (i & ((ll)1 << j))
            evenCount++;
    }
    return evenCount;
}
int counter(ll m, ll n, int k)
{

    int counter = 0;
    for (ll i = m; i <= n; i++)
    {
        if (abs(funcA(i) - funcB(i)) == k)
            counter++;
    }
    return counter;
}

int main()
{
    FastIO();
    int t;
    ll m, n, k;
    cin >> t;
    while (t--)
    {
        cin >> m >> n >> k;
        cout << counter(m, n, k) << "\n";
    }
    return 0;
}