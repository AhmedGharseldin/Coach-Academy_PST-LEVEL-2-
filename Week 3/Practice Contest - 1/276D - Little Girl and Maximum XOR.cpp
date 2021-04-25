//https://codeforces.com/problemset/problem/276/D

#define FastIO() ios_base::sync_with_stdio(false), cin.tie(NULL);
#include <bits/stdc++.h>
typedef long long ll;

using namespace std;
const ll mxxx = 1e18;
const int N = 1e6 + 9;
int arr[N];

int maxXor(ll l, ll r);

int main()
{
    FastIO();
    ll l, r;
    cin >> l >> r;
    if (r - l <= 1)
    {
        cout << (l ^ r) << endl;
        return 0;
    }
    int numberOfBits = maxXor(l, r);
    ll answer = pow(2, numberOfBits);
    cout << answer - 1 << endl;
    return 0;
}

int maxXor(ll l, ll r)
{
    ll maxNumber = l ^ r;
    int counter = 0;
    while (maxNumber)
    {
        counter++;
        maxNumber >>= 1;
    }
    return counter;
}