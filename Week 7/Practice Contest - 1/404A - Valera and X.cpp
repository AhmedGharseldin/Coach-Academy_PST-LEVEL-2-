//https://codeforces.com/problemset/problem/44/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    set<char> c[2];
    cin >> n;
    char arr[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
            if (i == j || j == (n - i - 1))
                c[0].insert(arr[i][j]);
            else
                c[1].insert(arr[i][j]);
        }
    }
    char first = *c[0].begin(), second = *c[1].begin();
    cout << (((c[0].size() == 1 && c[1].size() == 1) && (c[0].size() && c[1].size() && first != second)) ? "YES\n" : "NO\n");
    return 0;
}
