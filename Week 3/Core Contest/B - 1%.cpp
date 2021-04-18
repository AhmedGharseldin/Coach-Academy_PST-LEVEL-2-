//https://atcoder.jp/contests/abc165/tasks/abc165_b?lang=en

#define FastIO() ios_base::sync_with_stdio(false), cin.tie(NULL);
#include <bits/stdc++.h>
typedef long long ll;

using namespace std;
const int N = 2e5 + 9;
int arr[N];

int main()
{
    ll x;
    cin >> x;
    ll arr[4000];
    arr[0] = 100;

    for (int i = 1; i < 4000; i++)
    {
        arr[i] = arr[i - 1] + (arr[i - 1] / 100);
        if (arr[i] >= x)
        {
            cout << i << endl;
            return 0;
        }
    }
}
