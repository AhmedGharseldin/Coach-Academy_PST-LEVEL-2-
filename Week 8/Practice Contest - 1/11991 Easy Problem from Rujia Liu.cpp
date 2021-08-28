//https://onlinejudge.org/index.php?option=onlinejudge&Itemid=8&page=show_problem&problem=3142

#include <bits/stdc++.h>

using namespace std;
const int N = 1e6 + 5;

int main()
{
    int n, m, k, v;
    while (cin >> n>>m)
    {
        vector<vector<int>> num(N);
        int x;
        for (int i = 1; i <= n; i++)
        {
            cin >> x;
            num[x].push_back(i);
        }
        for (int i = 0; i < m; i++)
        {
            cin >> k >> v;
            if (num[v].size() >= k)
            {
                cout << num[v][k - 1] << endl;
            }
            else
                cout << 0 << '\n';
        }
    }
    return 0;
}
