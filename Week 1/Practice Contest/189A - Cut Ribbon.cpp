//https://codeforces.com/problemset/problem/189/A

#define FastIO() ios_base::sync_with_stdio(false), cin.tie(NULL);
#include <bits/stdc++.h>
typedef long long ll;

using namespace std;
const int N = 2e5 + 9;
int arr[N];

int main()
{
    int n, a, b, c, z, k = -1;
    cin >> n >> a >> b >> c;

    for (int i = 0; i <= n; i++)
        for (int j = 0; j <= n; j++)
        {
            z = (n - i * a - j * b) / c;
            if (z >= 0 && (z * c + i * a + j * b == n))
                k = max(k, i + j + z);
        }
    cout << k << endl;
}
