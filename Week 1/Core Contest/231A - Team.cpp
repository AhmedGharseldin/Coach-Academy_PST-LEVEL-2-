//https://codeforces.com/problemset/problem/231/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, z = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x, c = 0;
        for (int j = 0; j < 3; j++)
        {
            cin >> x;
            if (x == 1)
                c++;
        }
        if (c >= 2)
            z++;
    }
    cout << z << endl;
}
