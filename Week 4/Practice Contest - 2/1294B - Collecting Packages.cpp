//https://codeforces.com/problemset/problem/1294/B

#include <bits/stdc++.h>
using namespace std;
int const N = 1e5;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string answer;
        bool No = false;
        int n, x, y;
        cin >> n;
        vector<pair<int, int>> P;
        for (int i = 0; i < n; i++)
        {
            cin >> x >> y;
            P.push_back({x, y});
        }
        P.push_back({0, 0});
        sort(P.begin(), P.end());
        int r, u;
        for (int i = 1; i <= n; i++)
        {
            r = P[i].first - P[i - 1].first;
            u = P[i].second - P[i - 1].second;
            if (r < 0 || u < 0)
            {
                cout << "NO" << endl;
                No = true;
                break;
            }
            else
            {
                while (r--)
                    answer += 'R';
                while (u--)
                    answer += 'U';
            }
        }
        if (!No)
        {
            cout << "YES" << endl;
            cout << answer << endl;
        }
    }
    return 0;
}
