//https://codeforces.com/problemset/problem/1141/B

#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, x = 0, count = 0, sum = 0;
    cin >> n;
    int arr[n + n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    for (int i = n; i < n + n; i++)
    {
        arr[i] = arr[x];
        x++;
    }
    for (int i = 0; i < n + n; i++)
    {
        if (arr[i]) count++;
        else
        {
            sum = max(sum, count);
            count = 0;
        }
    }
    cout << sum << endl;
    return 0;
}