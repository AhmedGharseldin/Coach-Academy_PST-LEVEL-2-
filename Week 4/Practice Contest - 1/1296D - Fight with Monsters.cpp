//https://codeforces.com/problemset/problem/1296/D

#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

int main()
{
    int n, a, b, k, score = 0;
    cin >> n >> a >> b >> k;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int combined = a + b, rem[n], x;
    for (int i = 0; i < n; i++)
    {
        x = arr[i] % combined;
        if (x == 0)
            x = a + b;
        rem[i] = (x + a - 1) / a - 1;
    }
    sort(rem, rem + n);
    for (int i = 0; i < n; i++)
    {
        if (rem[i] <= k)
        {
            score++;
            k -= rem[i];
        }
    }
    cout << score << endl;
    return 0;
}