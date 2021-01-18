//https://codeforces.com/problemset/problem/158/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, arr[51] = {0}, x, counter = 0;
    cin >> n >> x;

    for (int i = 1; i <= n; i++)
        cin >> arr[i];
    for (int i = 1; i <= n; i++)
    {
        if ((arr[i] >= arr[x]) && (arr[i] != 0))
        {
            counter++;
        }
    }
    cout << counter;
    return 0;
}