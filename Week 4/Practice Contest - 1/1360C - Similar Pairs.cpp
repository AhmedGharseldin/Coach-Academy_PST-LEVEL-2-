//https://codeforces.com/problemset/problem/1360/C

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, a, c = 0;
        cin >> n;
        vector<int> odd, even;
        for (int i = 0; i < n; i++)
        {
            cin >> a;
            if (a & 1)
                odd.push_back(a);
            else
                even.push_back(a);
        }
        int x = odd.size(), y = even.size();
        if (x % 2 == 0 && y % 2 == 0)
            cout << "YES" << endl;
        else
        {
            bool pairFound = false;
            for (int i = 0; i < x; i++)
                for (int j = 0; j < y; j++)
                    if (abs(odd[i] - even[j]) == 1)
                    {
                        pairFound = true;
                        break;
                    }
            cout << (pairFound ? "YES" : "NO") << endl;
        }
    }
    return 0;
}