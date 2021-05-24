//https://codeforces.com/problemset/problem/1304/C

#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

int main()
{
    int q, n, ones = 0, two = 0, three = 0, input;
    cin >> q;
    while (q--)
    {
        bool notPossible = false;
        int customers, startTemp;
        cin >> customers >> startTemp;
        int arrivalTime, intervalStart, intervalEnd, low, high, mn = startTemp, mx = startTemp, diff, prev = 0;
        while (customers--)
        {
            cin >> arrivalTime >> low >> high;
            diff = arrivalTime - prev;
            intervalStart = mn - diff;
            intervalEnd = mx + diff;
            if (low > intervalEnd || high < intervalStart)
                notPossible = true;
            mn = max(low, intervalStart);
            mx = min(high, intervalEnd);
            prev = arrivalTime;
        }
        cout << (notPossible ? "NO" : "YES") << endl;
    }
    return 0;
}