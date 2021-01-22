//https://codeforces.com/problemset/problem/978/A

#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, counter = 0, counter2 = 0;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = n - 1; i > 0; i--)
        for (int j = i - 1; j >= 0; j--)
            if (a[i] == a[j] && a[i] != -1)
            {
                a[j] = -1;
                counter++;
            }
    for (int i = 0; i < n; i++)
        if (a[i] != -1)
            counter2++;
    cout << counter2 << endl;
    for (int i = 0; i < n; i++)
        if (a[i] != -1)
            cout << a[i] << " \n"[i == n - 1];
    return 0;
}
