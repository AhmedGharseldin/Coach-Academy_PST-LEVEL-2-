//https://codeforces.com/problemset/problem/988/A

#define FastIO() ios_base::sync_with_stdio(false), cin.tie(NULL);
#include <bits/stdc++.h>
typedef long long ll;

using namespace std;
const int N = 1e5 + 9;
int freq[N];

bool solve(int *arr, int n, int k);

int main()
{
    int n, k;
    cin >> n >> k;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    if (solve(arr, n, k) == true)
    {
        cout << "YES" << endl;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] != -1 && k)
            {
                cout << i + 1 << " \n"[i == n - 1];
                k--;
            }
        }
    }
    else
        cout << "NO" << endl;
    return 0;
}

bool solve(int *arr, int n, int k)
{
    int counter = 0;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
            if (arr[i] == arr[j] && arr[j] != -1 && arr[i] != -1)
            {
                arr[j] = -1;
                counter++;
            }
    }
    return (n - counter >= k ? true : false);
}