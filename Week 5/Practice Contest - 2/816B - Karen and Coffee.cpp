//https://codeforces.com/problemset/problem/816/B

#include <bits/stdc++.h>

using namespace std;
#define ll long long
const int N = 2e5 + 1;
int Freq[N];
int Ans[N];

int main()
{
    int n, l, r, k, q;
    cin >> n >> k >> q;
    for (int i = 0; i < n; i++)
    {
        cin >> l >> r;
        Freq[l]++;
        Freq[r + 1]--;
    }
    for (int i = 1; i < N; i++)
        Freq[i] = Freq[i] + Freq[i - 1];
    for (int i = 1; i < N; i++)
    {
        if (Freq[i] >= k)
            Ans[i] = 1;
        else
            Ans[i] = 0;
    }
    for (int i = 1; i < N; i++)
        Ans[i] = Ans[i] + Ans[i - 1];
    while (q--)
    {
        int ans = 0;
        cin >> l >> r;
        ans = Ans[r] - Ans[l - 1];
        cout << ans << endl;
    }
    return 0;
}