//https://codeforces.com/problemset/problem/1324/A

#define FastIO() ios_base::sync_with_stdio(false), cin.tie(NULL);
#include <bits/stdc++.h>
typedef long long ll;

using namespace std;
const int N = 2e5 + 9;
int arr[N];

int main()
{

    int t, n, x;
    cin >> t;
    while (t--)
    {
        bool flag = true;
        cin >> n;
        int arr[n], sum = 0;
        for (int i = 0; i < n; i++)
            cin >> arr[i];
    
        sort(arr, arr + n);
        for (int i = 1; i < n; i++)
            if ((arr[i] - arr[0]) & 1)
                flag = false;
        cout << (flag ? "YES" : "NO") << endl;
    }
    return 0;
}