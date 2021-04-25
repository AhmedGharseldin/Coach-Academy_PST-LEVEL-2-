//https://codeforces.com/problemset/problem/285/C

#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

int main()
{
    int n, c = 1;
    ll answer = 0;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr, arr + n);
    for (int i = 0; i < n; i++)
    {
        answer += abs(c - arr[i]);
        c++;
    }
    cout << answer << endl;
    return 0;
}
