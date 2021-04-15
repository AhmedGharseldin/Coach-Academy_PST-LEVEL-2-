//https://codeforces.com/problemset/problem/1421/A

#define FastIO() ios_base::sync_with_stdio(false), cin.tie(NULL);
#include <bits/stdc++.h>
typedef long long ll;

using namespace std;
const int N = 2e5 + 9;
int arr[N];

int main()
{
    int a, b, t, z;
    cin >> t;
    while (t--)
    {
        cin >> a >> b;
        z = a & b;
        cout << (a ^ z) + (b ^ z) << endl;
    }
    return 0;
}