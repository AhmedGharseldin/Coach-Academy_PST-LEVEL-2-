//https://codeforces.com/problemset/problem/1335/C

#include <bits/stdc++.h>
#define FastIO() ios_base::sync_with_stdio(false), cin.tie(NULL);
typedef long long ll;

using namespace std;

int main()
{
    FastIO();
    int t, n, student;
    vector<int> all;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int freq[n + 5] = {}, mx = 0, mn = 0, it = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> student;
            all.push_back(student);
            freq[student]++;
        }
        sort(freq, freq + n + 5, greater<int>());
        mx = freq[0];
        while (freq[it])
        {
            mn++;
            it++;
        }
        if (mx > mn)
            cout << mn << "\n";
        else if (mn > mx)
            cout << mx << "\n";
        else if (mn == mx)
        {
            if (n == 1)
                cout << 0 << " \n";
            else
                cout << mx - 1 << "\n";
        }
        all.clear();
    }
    return 0;
}
