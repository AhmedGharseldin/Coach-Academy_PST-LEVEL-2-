//https://codeforces.com/problemset/problem/579/A

#define FastIO() ios_base::sync_with_stdio(false), cin.tie(NULL);
#include <bits/stdc++.h>
typedef long long ll;

using namespace std;
const int N = 2e5 + 9;
int arr[N];

//pair <int, int> x;

int main()
{
    int x, counter = 0;
    cin >> x;
    while (x)
    {
        if (x & 1)
            counter++;
        x >>= 1;
    }
    cout << counter << endl;
    return 0;
}