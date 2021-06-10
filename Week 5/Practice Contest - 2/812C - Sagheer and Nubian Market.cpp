//https://codeforces.com/problemset/problem/812/C

#include <bits/stdc++.h>
typedef long long ll;

using namespace std;
int const N = 1e6 + 5;

int main()
{
    int n, budget;
    ll sum = 0, k, maxK = 0, current;
    cin >> n >> budget;
    int arr[n + 1];
    vector<ll> souv;
    souv.push_back(0);
    arr[0] = 0;
    for (int i = 1; i <= n; i++)
        cin >> arr[i];
    // sort(arr, arr + n + 1);
    int ptrstart = 0, ptrmd, ptrend = n;

    while (ptrstart <= ptrend)
    {
        sum = 0;
        ptrmd = (ptrstart + ptrend) / 2;
        // cout << ptrmd << " ";
        for (ll i = 1; i <= n; i++)
        {
            current = arr[i] + (i * ptrmd);
            // cout << current << endl;
            souv.push_back(current);
        }

        sort(souv.begin(), souv.end());

        for (int i = 1; i <= ptrmd; i++)
        {
            sum += souv[i];
            // cout << souv[i] << " " << sum << endl;
        }
        if (sum <= budget)
        {
            k = ptrmd;
            maxK = sum;
            ptrstart = ptrmd + 1;
            // cout << k << " " << maxK << endl;
            souv.clear();
            souv.push_back(0);
        }
        else
        {
            // cout << k << " " << maxK << endl;
            ptrend = ptrmd - 1;
            souv.clear();
            souv.push_back(0);
        }
    }
    cout << k << " " << maxK << endl;

    return 0;
}

