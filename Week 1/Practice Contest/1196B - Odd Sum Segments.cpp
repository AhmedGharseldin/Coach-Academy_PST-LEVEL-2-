//https://codeforces.com/problemset/problem/1196/B

#define FastIO() ios_base::sync_with_stdio(false), cin.tie(NULL);
#include <bits/stdc++.h>
typedef long long ll;

using namespace std;
const int N = 2e5 + 9, X = 2e5 + 5;
int arr[N];
int oddIndx[X];

int main()
{
    int t, n, k;

    cin >> t;
    while (t--)
    {
        int counter = 0;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] % 2)
                counter++;
        }
        if (counter < k || counter % 2 != k % 2)
        {
            cout << "NO" << endl;
            continue;
        }
        cout << "YES" << endl;
        for (int i = 0; i < n; i++)
        {
            if (k == 1)
                break;
            if (arr[i] % 2 == 1)
            {
                cout << i + 1 << " ";
                k--;
            }
        }
        cout << n << endl;
    }
    return 0;
}