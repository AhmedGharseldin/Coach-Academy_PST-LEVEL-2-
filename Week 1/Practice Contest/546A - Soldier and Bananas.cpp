//https://codeforces.com/problemset/problem/546/A

#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

int main()
{
    int w, k, n, sum = 0, b;
    cin >> k >> n >> w;
    for (int i = 1; i <= w; i++)
    {
        sum += k * i;
    }
    if (n > sum)
        cout << 0 << endl;
    else
        cout << sum - n << endl;
    return 0;
}
