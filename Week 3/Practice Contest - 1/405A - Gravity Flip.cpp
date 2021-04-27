//https://codeforces.com/problemset/problem/405/A

#include <bits/stdc++.h>
#define FastIO() ios_base::sync_with_stdio(false), cin.tie(NULL);
typedef long long ll;

using namespace std;

int main()
{
    FastIO();
    int n, x, temp;
    cin >> n;
    x = n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    while (x--)
    {
        for (int i = 0; i < n - 1; i++)
            if (arr[i] > arr[i + 1])
            {
                temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
    }
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
    return 0;
}