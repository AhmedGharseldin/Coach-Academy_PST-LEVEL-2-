//https://codeforces.com/problemset/problem/1475/C

#include <bits/stdc++.h>
#define FastIO() ios_base::sync_with_stdio(false), cin.tie(NULL);
typedef long long ll;

using namespace std;
const int N = 2e5;

void solve(pair<int, int> couples[], int k, int a, int b)
{
    int boys[a] = {}, girls[b] = {};
    ll counter = 0;
    for (int i = 0; i < k; i++)
    {
        counter += (i - (boys[couples[i].first] + girls[couples[i].second]));
        boys[couples[i].first]++;
        girls[couples[i].second]++;
    }
    cout << counter << endl;
}

int main()
{
    FastIO();
    int t, a, b, k, input;
    cin >> t;
    while (t--)
    {
        cin >> a >> b >> k;
        pair<int, int> couples[k];
        for (int i = 0; i < k; i++)
        {
            cin >> input;
            couples[i].first = input;
        }
        for (int i = 0; i < k; i++)
        {
            cin >> input;
            couples[i].second = input;
        }
        solve(couples, k, a + 1, b + 1);

        // for (int i = 0; i < k; i++)
        //     cout << boys[i] << " " << girls[i] << "\n";
    }
    return 0;
}