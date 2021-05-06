//https://codeforces.com/problemset/problem/652/B

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;
    int n;
    cin >> n;
    int arr[n], x = 0, y = n;
    bool check = true;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    while (x <= n)
    {
        y = n - 1 - x;
        v.push_back(arr[x]);
        v.push_back(arr[y]);
        x++;
    }
    for (int i = 0; i < n; i++)
        cout << v[i] << " \n"[i == n - 1];
}