//https://codeforces.com/problemset/problem/1324/B

#define FastIO() ios_base::sync_with_stdio(false), cin.tie(NULL);
#include <bits/stdc++.h>
typedef long long ll;

using namespace std;
const int N = 1e5 + 9;
int freq[N];

bool solve(int *arr, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
            if (arr[i] == arr[j] && j - i > 1)
                return true;
    }
    return false;
}

int main()
{
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int *arr = new int[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        cout << (solve(arr, n) ? "YES" : "NO") << endl;
    }
    return 0;
}