//https://codeforces.com/problemset/problem/279/B

#include <bits/stdc++.h>

using namespace std;
#define ll long long
const int N = 1e5 + 5;
int arr[N];

int main()
{
    int n, target, books = 0, mx = 0;
    ll sum = 0;
    cin >> n >> target;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int l = 0, r = 0;
    while (r < n)
    {
        sum += arr[r];
        if (sum <= target)
        {
            books = r - l + 1;
            mx = max(mx, books);
        }
        else
        {
            sum -=arr[l];
            l++;
        }
        r++;
    }
    cout << mx << endl;
    return 0;
}