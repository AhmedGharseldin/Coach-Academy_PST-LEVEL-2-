//https://codeforces.com/problemset/problem/372/A

#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const ll N = 5e5 + 5;

int main()
{
    int n;
    cin >> n;
    int kangaroos[n];
    for (int i = 0; i < n; i++)
        cin >> kangaroos[i];
    sort(kangaroos, kangaroos + n);
    int l = 0, r = (n + 1) / 2, counter = 0;

    while (l < r && r < n)
    {
        if (kangaroos[r] >= kangaroos[l] * 2)
        {
            counter++;
            l++;
            r++;
        }
        else
            r++;
    }
    cout << n - counter << endl;
    return 0;
}
