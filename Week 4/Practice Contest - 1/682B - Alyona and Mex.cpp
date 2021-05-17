//https://codeforces.com/problemset/problem/682/B

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, counter = 1;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr, arr + n);
    for (int i = 0; i < n; i++)
        if (arr[i] >= counter)
            counter++;
    cout << counter <<endl;
    return 0;
}
