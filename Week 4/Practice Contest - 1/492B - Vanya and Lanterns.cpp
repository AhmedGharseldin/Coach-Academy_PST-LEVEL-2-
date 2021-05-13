//https://codeforces.com/problemset/problem/492/B

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, l, distanceBetweenLamp = 0;
    cin >> n >> l;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr, arr + n);
    for (int i = 0; i < n - 1; i++)
        distanceBetweenLamp = max(distanceBetweenLamp, arr[i + 1] - arr[i]);
    double ans = 1.0 * distanceBetweenLamp / 2;
    if (arr[0] > ans && arr[0] >= l - arr[n - 1])
        ans = arr[0];
    else if (l - arr[n - 1] > ans && l - arr[n - 1] >= arr[0])
        ans = l - arr[n - 1];
    cout << fixed << setprecision(10) << ans;
    return 0;
}