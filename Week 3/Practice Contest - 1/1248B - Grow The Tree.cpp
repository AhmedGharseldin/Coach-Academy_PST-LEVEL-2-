//https://codeforces.com/problemset/problem/1248/B

#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

int main()
{
    int n;
    ll x = 0, y = 0, gradient = 0;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr, arr + n);
    int start = 0, end = n - 1;
    while (start < end)
    {
        x += arr[start];
        y += arr[end];
        end--;
        start++;
    }
    if (start == end)
        y += arr[start];

    gradient = x * x + y * y;
    cout << gradient;
    return 0;
}