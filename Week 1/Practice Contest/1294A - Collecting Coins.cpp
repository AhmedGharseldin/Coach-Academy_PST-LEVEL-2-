//https://codeforces.com/problemset/problem/1294/A

#define FastIO() ios_base::sync_with_stdio(false), cin.tie(NULL);
#include <bits/stdc++.h>
typedef long long ll;

using namespace std;
const int N = 2e5 + 9;
int arr[N];

int main()
{
    FastIO();
    int a, b, c, n, t, x;
    cin >> t;
    while (t--)
    {
        int sum = 0;
        cin >> a >> b >> c >> n;
        sum = (max({a, b, c})) * 3 - (a + b + c);
        x = n - sum;
        if (n < sum || (x % 3 != 0))
            cout << "NO" << endl;
        else if (x % 3 == 0)
            cout << "YES" << endl;
    }
}
