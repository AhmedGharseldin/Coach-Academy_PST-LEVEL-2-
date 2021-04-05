//https://codeforces.com/problemset/problem/1165/D

#define FastIO() ios_base::sync_with_stdio(false), cin.tie(NULL);
#include <bits/stdc++.h>
typedef long long ll;

using namespace std;
const int N = 1e6 + 9;
int compare[N];

int main()
{
    FastIO();
    ll t, n, k;
    cin >> t;
    while (t--)
    {
        cin >> n;
        ll *arr = new ll[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        int st = 0, en = N - 1;
        ll answer, compare[N] = {};
        sort(arr, arr + n);
        answer = arr[0] * arr[n - 1];
        for (ll i = 2; i <= sqrt(answer); i++)
        {
            if (answer % i == 0)
            {
                compare[st] = i;
                if (i != answer / i)
                    compare[en] = answer / i;
                st++;
                en--;
                if (en < st)
                    break;
            }
        }
        sort(compare, compare + N, greater<int>());
        sort(arr, arr + n, greater<int>());
        bool flag = true;
        for (int i = 0; i < n; i++)
            if (compare[i] != arr[i])
            {
                flag = false;
                break;
            }
        cout << (flag ? answer : -1) << "\n";
    }
    return 0;
}
