//https://codeforces.com/problemset/problem/550/B

#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

int main()
{
    int n, m, q, r1, c1, r2, c2;
    char x;
    cin >> n >> m >> q;
    char arr[n][m];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            arr[i][j] = '.';
    for (int i = 0; i < q; i++)
    {
        cin >> r1 >> c1 >> r2 >> c2 >> x;
        for (int i = r1 - 1; i < r2; i++)
            for (int j = c1 - 1; j < c2; j++)
                arr[i][j] = x;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cout << arr[i][j];
        cout << endl;
    }
    return 0;
}
