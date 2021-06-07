//https://codeforces.com/problemset/problem/474/B

#include <bits/stdc++.h>

using namespace std;
#define ll long long
const int N = 1e6 + 5;
int worms[N];

int main()
{
    int n, q, w, l = 0, r = 0, pile = 1;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> r;
        for (int i = 0; i < r; i++)
        {
            worms[l] = pile;
            l++;
        }
        pile++;
    }
    cin >> q;
    while (q--)
    {
        cin >> w;
        cout << worms[w-1] << endl;
    }
    return 0;
}