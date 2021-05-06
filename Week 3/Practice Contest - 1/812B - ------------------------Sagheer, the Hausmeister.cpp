//https://codeforces.com/problemset/problem/812/B

#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    m += 2;
    char arr[n][m];
    for (int i = n - 1; i >= 0; i--)
        for (int j = 0; j < m; j++)
            cin >> arr[i][j];
    vector<int> ls;
    vector<int> rs;
    //starting from left side
    for (int i = 0; i < n; i++)
    {
        int mx = 0, rooms = 0;
        for (int j = 1; j < m - 1; j++)
        {
            rooms++;
            if (arr[i][j] == '1')
                mx = max(mx, rooms);
        }
        ls.push_back(mx);
    }
    //starting from right side
    for (int i = 0; i < n; i++)
    {
        int mx = 0, rooms = 0;
        for (int j = m - 2; j >= 1; j--)
        {
            rooms++;
            if (arr[i][j] == '1')
                mx = max(mx, rooms);
        }
        rs.push_back(mx);
    }

    for (int i = 0; i < n; i++)
        cout << ls[i] << " " << rs[i] << endl;
    // for (int i = 0; i < n; i++)
    //     for (int j = 0; j < m; j++)
    //         cout << arr[i][j];
    return 0;
}
