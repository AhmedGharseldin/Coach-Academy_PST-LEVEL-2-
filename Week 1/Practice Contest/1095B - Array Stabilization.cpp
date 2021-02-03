//https://codeforces.com/problemset/problem/1095/B

#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, ans1, ans2;
    cin >> n;
    int arr[n];
    if (n == 2)
    {
        cout << 0 << endl;
        return 0;
    }
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr, arr + n);
    if (arr[n - 2] <= arr[n - 1])
        ans1 = arr[n - 2] - arr[0];
    if (arr[1] >= arr[0])
        ans2 = arr[n - 1] - arr[1];

    cout << min(ans1, ans2) << endl;
    return 0;
}
