//https://codeforces.com/problemset/problem/869/A

#define FastIO() ios_base::sync_with_stdio(false), cin.tie(NULL);
#include <bits/stdc++.h>
typedef long long ll;

using namespace std;
const ll mxxx = 1e18;
const int N = 4000000;
bool arr[N];

int main()
{
    FastIO();
    int n, answer = 0;
    cin >> n;
    int koyomi[n], karen[n];
    for (int i = 0; i < n; i++)
    {
        cin >> koyomi[i];
        arr[koyomi[i]] = true;
    }
    for (int i = 0; i < n; i++)
    {
        cin >> karen[i];
        arr[karen[i]] = true;
    }
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            if (arr[koyomi[i] ^ karen[j]])
                answer++;
    cout << (answer & 1 ? "Koyomi" : "Karen") << endl;
    return 0;
}
