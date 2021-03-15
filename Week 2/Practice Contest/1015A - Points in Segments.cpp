//https://codeforces.com/problemset/problem/1015/A

#define FastIO() ios_base::sync_with_stdio(false), cin.tie(NULL);
#include <bits/stdc++.h>
typedef long long ll;

using namespace std;
const int N = 2e5 + 9;
int arr[N];
int freq[109];

int main()
{
    int n, m, x1, x2, counter = 0;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        cin >> x1 >> x2;
        for (int j = x1; j <= x2; j++)
            if (!freq[j])
                freq[j] = -1;
    }
    if (counter == m)
    {
        cout << 0 << endl;
        return 0;
    }
    for (int i = 1; i <= m; i++)
    {
        if (freq[i] == 0)
            counter++;
    }
    cout << counter << endl;
    for (int i = 1; i <= m; i++)
    {
        if (!freq[i])
            cout << i << " ";
    }
    return 0;
}