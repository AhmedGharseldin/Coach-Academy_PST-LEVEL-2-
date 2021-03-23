<<<<<<< HEAD
//https://codeforces.com/problemset/problem/1015/C

#define FastIO() ios_base::sync_with_stdio(false), cin.tie(NULL);
#include <bits/stdc++.h>
typedef long long ll;

using namespace std;
const int N = 1e5 + 9;
int freq[N];

int main()
{
    int n, m, x1, x2, counter = 0;
    ll sumx1 = 0, sumx2 = 0;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        cin >> x1 >> x2;
        sumx1 += x1, sumx2 += x2;
        freq[i] = x1 - x2;
    }
    sort(freq, freq + N, greater<int>());
    if (sumx2 > m)
    {
        cout << -1 << endl;
        return 0;
    }
    else
    {
        ll diff = sumx1 - m, i = 0;
        while (diff > 0)
        {
            counter++;
            diff -= freq[i];
            i++;
        }
    }
    cout << counter << endl;
    return 0;
=======
//https://codeforces.com/contest/1015/problem/C

#define FastIO() ios_base::sync_with_stdio(false), cin.tie(NULL);
#include <bits/stdc++.h>
typedef long long ll;

using namespace std;
const int N = 1e5 + 9;
int freq[N];

int main()
{
    int n, m, x1, x2, counter = 0;
    ll sumx1 = 0, sumx2 = 0;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        cin >> x1 >> x2;
        sumx1 += x1, sumx2 += x2;
        freq[i] = x1 - x2;
    }
    sort(freq, freq + N, greater<int>());
    if (sumx2 > m)
    {
        cout << -1 << endl;
        return 0;
    }
    else
    {
        ll diff = sumx1 - m, i = 0;
        while (diff > 0)
        {
            counter++;
            diff -= freq[i];
            i++;
        }
    }
    cout << counter << endl;
    return 0;
>>>>>>> 523a2a060b1669ecc5be2a7e03ca28e0909d6e92
}